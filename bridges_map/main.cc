#include "Bridges.h"
#include "DataSource.h"
#include "Array.h"
#include "SLelement.h"
#include "GraphAdjList.h"

using namespace bridges;

double degree_to_rad(double d) {
	return d * M_PI / 180;
}

// calculates the distance between two locations, based on lat/long
double calcDistance(double la1, double lo1, double la2, double lo2) {

	double R = 6371; // Radius of the earth in KM

	// Haversine formula to calculate a value between 0 and 1 between 2
	// points on a sphere, 1 being the opposite side of the sphere
	double laDistance = degree_to_rad(la2 - la1);
	double loDistance = degree_to_rad(lo2 - lo1);
	double a = sin(laDistance / 2) * sin(laDistance / 2)
		+ cos(degree_to_rad(la1)) * cos(degree_to_rad(la2))
		* sin(loDistance / 2) * sin(loDistance / 2);

	double c = 2. * atan2(sqrt(a), sqrt(1 - a));

	double distance = R * c;    //convert to KM
	return distance;
}


int main() {

	//create the Bridges object, set credentials
	int bridges_project_id = 356;
	string bridges_username = "your_name_here";
	string bridges_api_key  = "your_api_key_here";

#ifndef MAKEFILE
	static_assert(false,"You must compile this code with 'make'. If you delete this line do not forget this.");
#endif

	Bridges bridges(bridges_project_id, bridges_username, bridges_api_key);

	bridges.setTitle("Bridges Map");

	std::vector< EarthquakeUSGS > eqs; //You can leave this alone

	//------------------------------------------------------------------------
	//The code between the ---'s should be deleted after you run it once and
	// see how the graphing of dots on the map works

	//Get most recent 10000 earthquakes
	DataSource ds;
	eqs = ds.getEarthquakeUSGSData(10000);

	//sort earthquake by decreasing magnitude
	//uses a lambda function as third parameter to do a custom sort
	std::sort(eqs.begin(), eqs.end(),
			[](const EarthquakeUSGS & a, const EarthquakeUSGS & b)->bool {
				return a.getMagnitude() > b.getMagnitude();
			});

	//only retain the first 500 quakes
	eqs.resize(500);
	//------------------------------------------------------------------------
	//YOU: Replace the code above with code that loads the eqs vector with "Earthquakes"
	// that are each city in the US/world and setting the latitude and longitude on them like this
	// (In a loop):
	EarthquakeUSGS bob;
	bob.setLongit(123.456); //Replace this with the long from the CSV file
	bob.setLatit(789.123); //Replace this with the lat from the CSV file
	bob.setTitle("New Orleans"); //Replace this with the name from the CSV file
	bob.setMagnitude(6.5); //Replace this with the population
	eqs.push_back(bob);

	//Builds a graph with nodes at correct location
	//This means a computer science graph, not like a bar chart or something
	GraphAdjList<int, EarthquakeUSGS> graph;

	for (unsigned int i = 0; i < eqs.size(); ++i) {
		auto eq = eqs[i];
		graph.addVertex(i, eq);

		Element<EarthquakeUSGS> * el = graph.getVertex(i);
		el->setLabel(eq.getTitle() + "\n" + el->getValue().getDateStr());

		ElementVisualizer* elv = graph.getVisualizer(i);
		elv->setLocation(eq.getLongit(), eq.getLatit()); //Important
		elv->setSize(eq.getMagnitude()); //Important

		//YOU: Change this to color based on the population (i.e. magnitude)
		// color the quake nodes by lat/long 
		int red = (int)((eq.getLongit() / 180.0) * 255);
		red = red > 0 ? red : 0;

		int blue = (int)((eq.getLongit() / 180.0) * 255);
		blue = blue < 0 ? blue * -1 : 0;

		int green = (int)((eq.getLatit() / 90.0) * 255);
		green = green < 0 ? green * -1 : green;

		int alpha = 255;

		elv->setColor(Color(red, green, blue, alpha));
	}

	// tell Bridges what data structure to visualize
	bridges.setDataStructure(&graph);

	// set map overlay params
	bridges.setCoordSystemType("equirectangular");
	bridges.setMap("world","all");
	//bridges.setMap("us","all");
	bridges.setMapOverlay(true);

	// visualize the list
	bridges.visualize();
}


#include "Bridges.h"
#include "SymbolCollection.h"
#include "Circle.h"
#include "Polyline.h"
#include <cmath>
using namespace bridges;

int main() {
	//create the Bridges object, set credentials
	int bridges_project_id = 4;
	string bridges_username = "bellucci_0914945";
	string bridges_api_key  = "1248908572516";

#ifndef MAKEFILE
	static_assert(false,"You must compile this code with 'make'. If you delete this line do not forget this.");
#endif

	Bridges bridges(bridges_project_id, bridges_username, bridges_api_key);
	bridges.setTitle("Bridges Poly");

	SymbolCollection sin_boi;
	//YOU: Change the viewport to match the thing you're graphing
	const int X_MIN = -10, X_MAX = 10, Y_MIN = -10, Y_MAX = 10;
	const float STEP = 0.01; //YOU: Change this to 0.01
	sin_boi.setViewport(X_MIN,X_MAX,Y_MIN,Y_MAX); //Graph area between (-10,-1) and (10,1)
	
	// INPUTTING POLYNOMIALS: 
	int opt1 = 0; 
	int opt2 = 0; 
	int opt3 = 0; 


	cout << "Input three numbers for a valid polynomial: " << endl; 
	cin >> opt1; 
	cin >> opt2; 
	cin >> opt3; 

	//Set up the XY axis thingy
	Polyline x_axis;
		x_axis.setStrokeWidth(.1);
		//Colors available can be found here:
		//https://bridgesuncc.github.io/doc/cxx-api/current/html/classbridges_1_1datastructure_1_1_color.html
		x_axis.setStrokeColor("black");
		x_axis.addPoint(X_MIN,0);
		x_axis.addPoint(X_MAX,0);
	sin_boi.addSymbol(x_axis);
	Polyline y_axis;
		y_axis.setStrokeWidth(.1);
		y_axis.setStrokeColor("mediumseagreen"); //Yes, I am just picking names that sound funny
		y_axis.addPoint(0,Y_MIN);
		y_axis.addPoint(0,Y_MAX);
	sin_boi.addSymbol(y_axis);
	Circle origin(0,0,.1); //Dot in the center is .1 in radius for scale
	origin.setFillColor("mintcream");
	sin_boi.addSymbol(origin);

	//Visualize a sin wave sampling every STEP units
	Polyline polly;
		polly.setStrokeWidth(0.1);
		polly.setStrokeColor("salmon");
		for (float x = X_MIN; x <= X_MAX; x += STEP) {
			float y = opt1 * pow(x, 2) * opt2 * pow(x, 3);  
			polly.addPoint(x,y);
		}
	sin_boi.addSymbol(polly);

	// tell Bridges what data structure to visualize
	bridges.setDataStructure(&sin_boi);

	// visualize
	bridges.visualize();
}


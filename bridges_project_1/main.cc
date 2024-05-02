#include "Bridges.h"
#include "ColorGrid.h"
#include <iostream> 
#include "/public/read.h" 
#include <cstdlib> 

using namespace bridges;

//Change this code to produce the checkerboard patterns you see in the README
//Change the project name for each one, so you don't overwrite your old visualization

void drawCanvas(int RED, int GREEN, int BLUE, ColorGrid& grid) {
	srand(time(NULL)); 

	for (int i = 0; i < 50 ; i++) {
		for (int j = 0; j < 50; j++){
			int R = rand() % 255; 
			int G = rand() % 255; 
			int B = rand() % 255; 

			grid.set(i, j, Color(R,G,B));   
		} 
	} 
} 

void drawSquare(int DIM, int xOff, int yOff, ColorGrid& grid) {
	for (int d = DIM ; d > 0; d-=2) { 
			int R = rand() % 255; 
			int G = rand() % 255; 
			int B = rand() % 255;
			yOff++;
			xOff++;
		for (int i = 0; i < d; i++) { 
			for (int j = 0; j < d; j++) {
				grid.set(i+yOff,j+xOff, Color(R,G,B));
		} 
	}  

	} 
	
}  


int main() {
	const int PROJECT_ID = 3;
	Bridges bridges (PROJECT_ID, "Gianni_Bellucci", "933769638767");
	bridges.setTitle("Regular Pattern");
	bridges.setDescription("Random square pattern generation");

	ColorGrid grid = ColorGrid(50, 50);
	const int RED = 0; //0% red
	const int GREEN = 100; //100% green
	const int BLUE = 50; //50% blue
	//Draw a vertical line

	drawCanvas(RED,GREEN,BLUE, grid);


	for (int i = 0; i < 35; i++) {
		int x = rand() % 12 + 3 ;
		int y = 50 - x; 

		int DIM = x;    
		drawSquare(DIM, rand()% y ,rand() % y, grid); 
	} 

	
	bridges.setDataStructure(&grid);
	bridges.visualize();

}

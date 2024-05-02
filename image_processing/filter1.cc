//Student 1 Name: GIANNI JOSEPH BELLUCCI 
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;

void make_rect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
	for (int i = y_min; i <= y_max; i++) {
		for (int j = x_min; j <= x_max; j++) {
			vec[i][j][RED] = 0;
			vec[i][j][GREEN] = 0;
			vec[i][j][BLUE] = 0;
		}
	}
}
//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
//FIXME: There is a fun bug in this code waiting for you to discover
//Are the cols and rows reversed? It's up to you to find out!


void filter1(vector<vector<vector<int>>> &vec) {
	//Get the number of rows, columns, and colors in this 3D vector
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);



	//Do the image filtering on every row and column in this image...
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			//r is the red value at the current spot, g is the green, b is the blue
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];

		
			make_rect(vec, 50, 50, 50, 50); 

			// CRT VAPORWAVE FILTER: 

			if (g <= 255 and r <= 255 and b <= 255) {
		
				int wobble_range = 3; 
				int wobble_offset = rand() % (2 * wobble_range) - wobble_range;
	

				int avg = (r+g+b) / 3; 
				vec[i][j][RED] = avg + 150 * sin((j + wobble_offset) / 2.0);	
				vec[i][j][GREEN] = avg + 150 * sin((j + wobble_offset) / 2.0);
				vec[i][j][BLUE] = avg + 150 * cos((j + wobble_offset) / 2.0);	

			} 
		
			// PURPLE HUE: 
			vec.at(i).at(j).at(RED) *= 1.25; 
			vec.at(i).at(j).at(GREEN) *= 0; 
			vec.at(i).at(j).at(BLUE) *= 2; 

			// VIGNETTE POSITIONING: 
			const double vignette = 1.25;  
			
			const double middle_x = cols / 2.0; 
			const double middle_y = rows / 2.0; 
			const double max_D_x = middle_x; 
			const double max_D_y = middle_y; 
				
			double dist_x = abs(j - middle_x);
			double dist_y = abs(i - middle_y);

			double bright_x = 1.0 - vignette * (dist_x / max_D_x); 
			double bright_y = 1.0 - vignette * (dist_y / max_D_y);


			// HANDLE BRIGHTNESS: 	
			double bright = bright_x * bright_y; 
			bright = max(0.0, min(1.0, bright)); 

			for (int k = 0; k < colors; k++) {
				vec[i][j][k] *= bright;
			} 

			
		 
				} 

			}
				
		}  			
	
 

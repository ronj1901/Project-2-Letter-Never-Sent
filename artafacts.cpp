#include <iostream>

#include "artafacts.hpp"
using namespace std;
int** getArtifacts( int &artifac_size ){

	std::cin >> artifac_size; 


	int **twoDim = 0;
	//create array
	twoDim = new int*[2];  //number of rows
	for (int row = 0; row <  2; row++){
		twoDim[row] = new int[artifac_size]; // number of cols
	}
	for (int row = 0; row <  2; row++){
		for (int col= 0; col < artifac_size; ++col)
		 {
		 	std::cin >> twoDim[row][col];
		 	/* code */
		 } // number of cols
	}

	return twoDim;


}

void printArtifacts(int** artifacts, int &artifac_size){


	for (int row = 0; row < 2; ++row){

		for(int col = 0; col <  artifac_size; ++col){
			std::cout <<  artifacts[row][col] << " " ;
		}

		std::cout << std::endl;
	}
}


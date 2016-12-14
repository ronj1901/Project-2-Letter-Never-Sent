#include <iostream>

#include "scores.hpp"
#include "utility.hpp"
using namespace std;
int** getScores(int &scores_size, int artafacts ){

	std::cin >> scores_size;


	int** twoDim = 0;
	//create array
	twoDim = new int*[scores_size];  //number of rows
	for (int row = 0; row <  scores_size; row++){
		twoDim[row] = new int[artafacts +1 ]; // number of cols
	}
	for (int row = 0; row <  scores_size; row++){
		for (int col= 0; col < (artafacts +1) ; ++col)
		 {
		 	std::cin >> twoDim[row][col];
		 	/* code */
		 } // number of cols
	}

	return twoDim;




}

void printScores(int** student, int student_size, int artafacts){


	for (int row = 0; row < student_size; ++row){

		for(int col = 0; col <  (artafacts + 1); ++col){
			std::cout <<  student[row][col] << " " ;
		}

		std::cout << std::endl;
	}
}



void printResult(string** student, int students_size, int artifac_size, int **artifacts, int **scores, int scores_size){

	for(int i =0; i <  students_size; ++i){
		 std::string id =  student[i][0];
		 int ID = str_to_int(id);

		 std::cout << id << " " << student[i][2] << "  " << student[i][3] ;

		 for (int j = 0 ; j < scores_size ; j++){
			 if (ID == scores[j][0]){
				 	double total = 0;
					for (int k = 1; k < artifac_size + 1; k++) {
							total +=  (double)scores[j][k]/ (artifacts[0][k-1])  * artifacts[1][k-1];

					}
					//std::cout << std ::endl;
					std::cout  << " " << total << std::endl;


					// begin printing cutpoint



					// end printing
			 }


		 }

	}

}

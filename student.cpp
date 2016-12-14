#include <iostream>

#include "student.hpp"
using namespace std;
string** getStudent (int &student_size ){

	std::cin >> student_size;


	string** twoDim = 0;
	//create array
	twoDim = new string*[student_size];  //number of rows
	for (int row = 0; row <  student_size; row++){
		twoDim[row] = new string[4]; // number of cols
	}


	for (int row = 0; row <  student_size; row++){
		for (int col= 0; col < 4; ++col)
		 {

		 	std::cin >> twoDim[row][col];

		 	/* code */
		 } // number of cols
	}

	return twoDim;

	//deallocate memory
	for (int i = 0; i < student_size; i++){
		delete[] twoDim[i];  //return cols
	}
	delete[] twoDim;  //return rows
	//init pointer
	twoDim = 0;



}

void printStudent(string** student, int &student_size){


	for (int row = 0; row < student_size; ++row){

		for(int col = 0; col <  4; ++col){
			std::cout <<  student[row][col] << " " ;
		}

		std::cout << std::endl;
	}
}

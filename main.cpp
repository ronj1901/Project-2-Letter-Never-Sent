#include "student.hpp"
#include "artafacts.hpp"
#include "scores.hpp"
#include "cutpoint.hpp"
#include <iostream>



int main(){

	// GEt aftafacts

	int artifac_size = 0;
	int **artifacts = 0;

	artifacts = getArtifacts( artifac_size );

 //	printArtifacts(artifacts, artifac_size);

	std::cout << std::endl;
	// get student

	int student_size = 0;
	string **student = 0;



	student = getStudent( student_size);

 printStudent(student, student_size);

	int scores_size = 0;
	int **scores = 0;

	scores = getScores(scores_size, artifac_size);

	printScores(scores, scores_size, artifac_size);
  int cutPointSize = 0;
	double **cutpoint = 0;
	cutpoint = getCutPoint(cutPointSize);

	std::cout << "TOTAL SCORE" << std::endl;

	printResult( student, student_size, artifac_size, artifacts, scores, scores_size);

	printCutpoint(cutpoint, cutPointSize, student, student_size, artifac_size, artifacts, scores, scores_size);

	// deallocating cutpoint
	for (int i = 0; i < cutPointSize; i++){
	 delete[] cutpoint[i];  //return cols
 }
 delete[] cutpoint;  //return rows
 //init pointer
 cutpoint = 0;
// deallocating student
 for (int i = 0; i < student_size; i++){
	delete[] student[i];  //return cols
}
delete[] student;  //return rows
//init pointer
student = 0;
// deallocating artifacts
for (int row = 0; row < 2 ; row++){
 delete[] artifacts[row];  //return cols
}
delete[] artifacts;
artifacts =0;
//deallocating scores

for (int row = 0; row < scores_size ; row++){
 delete[] scores[row];  //return cols
}
delete[] scores;
scores =0;


return 0;

}

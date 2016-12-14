 #include "cutpoint.hpp"
 #include "utility.hpp"
 #include <iostream>
 #include <iomanip>




double**   getCutPoint(int &cutPointSize){

  std::cin >> cutPointSize;

  double** twoDim = 0;
  twoDim = new double*[cutPointSize];  //number of rows

  for (int row = 0; row <  cutPointSize; row++){
		twoDim[row] = new double[4]; // number of cols
	}


  for (int row = 0; row <  cutPointSize; row++){
    for (int col= 0; col < 4; ++col)
     {
       std::cin >> twoDim[row][col];
      /* code */
     }


}

     return twoDim;

     //deallocate memory

     // number of cols
  }



  void printCutpoint(double** cutpoint, int &cutPointSize, std::string** student, int students_size, int artifac_size, int **artifacts, int **scores, int scores_size){
    double total_score =90;
    std:: string grade ;
    std::cout << cutPointSize << std::endl;
  	for (int row = 0; row < cutPointSize; ++row){
      std::cout << std::fixed;
     std::cout << std::setprecision(1) << cutpoint[row][0]  <<  " " <<  cutpoint[row][1]  << " " << cutpoint[row][2]  <<  " " << cutpoint[row][3] ;

    std::cout << std::endl;

    std::cout << "CUTPOINT SET " << row + 1 <<  std::endl;

        for(int i =0; i <  students_size; ++i){
      		 std::string id =  student[i][0];
      		 int ID = str_to_int(id);

      		 std::cout << id << " "  << student[i][2] << "  " << student[i][3] ;

      		 for (int j = 0 ; j < scores_size ; j++){
      			 if (ID == scores[j][0]){
      				 	double total = 0;
      					for (int k = 1; k < artifac_size + 1; k++) {
      							total +=  (double)scores[j][k]/ (artifacts[0][k-1])  * artifacts[1][k-1];


                          if (student[i][1] == "G"){
                                if (total >= cutpoint[row][0] )
                                       grade = "A";
                               else if (total >= cutpoint[row][1]  )
                                      grade = "B";

                               else if (total >= cutpoint[row][2]  )
                                     grade = "C";
                               else if (total >= cutpoint[row][3]  )
                                     grade = "D";
                               else
                                 grade = "F";
                            }

                        else  {
                              if (total >= cutpoint[row][2])   grade = "P";
                              else grade = "NP";
                        }

                }
      					std::cout  << " " << grade << std::endl;



      		 }

      	}

  		}




  	}
  }

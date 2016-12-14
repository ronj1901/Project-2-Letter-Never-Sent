#include <sstream>


int str_to_int(std::string point){     // string to conversion because degree is still string and we cant calcualate resulr

	std::istringstream myString(point);
	int result = 0;
	myString >> result;
	return result;


}

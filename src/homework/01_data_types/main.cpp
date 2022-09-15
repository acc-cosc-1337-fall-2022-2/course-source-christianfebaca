//write include statements
#include "data_types.h"
#include <iostream>


//write namespace using statement for cout
using namespace std::cout;
using namespace std::cin; 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout<<"Enter a number: \n";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result ="<<result<<"\n";
	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result ="<<result<<"\n";

	return 0;
}

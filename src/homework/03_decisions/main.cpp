//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;


int main()
{
	int input_grade;
	cout<<"Enter the number grade to be converted into an Alphabetical grade: ";
	cin>>input_grade;

	if(input_grade <= 100 && input_grade >= 0)
	{
		cout<<"grade for "<<input_grade<<" by using if_else is:"<<get_letter_grade_using_if(input_grade)<<"endl";
		cout<<"grade for "<<input_grade<<" by using switch is: "<<get_letter_grade_using_switch(input_grade)<<"endl";

	}
	else
	{
		cout<<"given number is not in range\n";
	}
	return 0;
}

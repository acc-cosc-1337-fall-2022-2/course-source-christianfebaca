//write include statements
#include<iostream>
#include"dna.h"
#include"dna.cpp"

//write using statements
using std::cout;
using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num1, num2, num3;
	

	do
	{
		cout<<"Please choose from the menu: 1. Factorial, 2. Greatest Common Divisor, 3. Exit: ";
		cin>>num1>>num2>>num3;

		cout<<"Are you sure you want to exit?: ";
		cin>>num3;


		while(!(num1 || num2 || num3))
			cout<<"Invalid number input, please select 1-3: "<<"endl";

	
} while(true);
return 0;
}
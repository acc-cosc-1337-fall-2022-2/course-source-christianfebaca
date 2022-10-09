#include<iostream>
#include<string>
#include"func.h"

using std::cout;
using std::cin;


/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int option;
	string dna; 

	while(1)
	{
		cout<<"Enter DNA string: ";
		cin>>dna;

		cout<<"Select option "<<"\n";
		cout<<"1) GC Content"<<"\n";
		cout<<"2) DNA Complement "<<"\n";

		if(option == 1)
		{
			double content = get_gc_content(dna);
			cout<<"GC Content: "<<content<<"\n";
		}

		else if(option == 2)
		{
			string complement = get_dna_complement(dna);
			cout<<"DNA Complement: "<<complement<<"\n";
		}

		else
		{
			cout<<"Not a valid input"<<"\n";
		}

		//continue or not menu
		char ch;
		cout<<"Do you want to continue? Press Y or y: ";
		cin>>ch;

		if(ch == 'Y' || ch == 'y')
		{
			cout<<"\n";
			continue;
		}

		else
		{
			if(ch == 'N' || ch == 'n')
			cout<<"\n";
			break;
		}

	}

	
	return 0;
}
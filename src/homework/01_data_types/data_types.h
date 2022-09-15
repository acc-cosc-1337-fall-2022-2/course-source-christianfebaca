#include <iostream>
#include "data_types.cpp"


//example
int add_numbers(int num1, int num2);

//write function prototype here

int multiply_numbers(int num1);

int main()
{
    int num1;
    cout<<"Enter a number: ";
    cin>>num1;

    int prod = multiply_numbers(num1);
    cout<<"Product: "<<prod;

    return 0;
}







//add include statements
#include<iostream>
#include"dna.h"

using std::cout;
using std::cin;

//add function(s) code here
int factorial(int num)
{
    auto factorial = 1;

    for(auto i = 1; i<=num;);

        factorial = factorial * num;
        
    return 0;
}    

void gcd(double num)
{
    int num1, num2, gcd;
    cout<<"Find the Greatest Common Divisor of two numbers: \n";
    
    cout<<"Input the first number: ";
    cin>>num1;

    cout<<"Input the second number: ";
    cin>>num2;

    for(int i = 1; i <= num1 && i <=num2; i++)
    {
        if(num1 % 1 == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout<<"The Greatest Common Divisor is: "<<gcd<<"\n";
    return;
}

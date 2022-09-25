//write include statement for decisions header
#include <iostream>
#include "decisions.h"


using std::cout;


//Write code for function(s) code here

char get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100)
        return 'A';
    else if(grade >= 80 && grade <= 89)
        return 'B';
    else if(grade >= 70 && grade <= 79)
        return 'C';
    else if(grade >= 60 && grade <= 69)
        return 'D';
    else
        return 'F';
}

char get_letter_grade_using_switch(int grade)
{
    int x = grade / 10;
    
    char result;
    switch(x)
    {
        case 10:
            result = 'A';
        case 9:
            result = 'A';
        case 8:
            result = 'B';
        case 7:
            result = 'C';
        case 6:
            result = 'D';
        default:
            result = 'F';
    }
    return result;
}

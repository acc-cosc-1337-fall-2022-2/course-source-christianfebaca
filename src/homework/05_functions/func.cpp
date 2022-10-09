//add include statements
#include<iostream>
#include"func.h"
#include<string>

using std::cout;


//add function code here
//get gc content variable
double get_gc_content(const string& dna)
{
    double content = 0.0;
    int len = 0;
    int i = 0;

    //if-while loop
    while(dna[i] != '0')
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        content += 1;
    }
    i += 1;
    len += 1;
    return content;
}

//dna complement function

string get_dna_complement(string dna)
{
    string rev_dna = get_reverse_string(dna);
    
    for (int i = 0; i < rev_dna.length(); i++)
    {
        switch(rev_dna[i])
        {
            case 'A':
            rev_dna[i] = 'T';

            case 'T':
            rev_dna[i] = 'A';

            case 'C':
            rev_dna[i] = 'G';

            case 'G':
            rev_dna[i] = 'C';
        }
    }
    return rev_dna;
}

// get string reverse function
string get_reverse_string(string dna)
{
    string rev_dna = " ";
    
    for (int i = dna.length() - 1; i >= 0; i--)
    
    rev_dna += dna[i];
    
    return rev_dna;
}
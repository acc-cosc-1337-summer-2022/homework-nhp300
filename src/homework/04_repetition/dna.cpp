#include "dna.h"
#include<iostream>

using std::cout;
using std::cin;


double get_gc_content(const string& dna_string)
{
    double gc_count = 0;

    for (int i = 0; i<=(dna_string.length()-1); i++)
    {
        if(dna_string[i] == 'G' || dna_string[i] == 'g' || dna_string[i] == 'C' || dna_string[i] =='c')
        {
            gc_count+=1;
        }
    }

    double gc_content = gc_count/(dna_string.length());

    return gc_content;
}


string reverse_complement(string dna_string)
{
    string reversed_string = "";

    for(int i = (dna_string.length() - 1); i>=0; i--)
    {
        reversed_string += dna_string[i];
    }

    return reversed_string;
}


//append vs += to test code a few different ways 
string get_dna_complement(string dna_string)
{
   string dna_complement = reverse_complement(dna_string);
   string rvs_dna_complement = "";
   
   for(int i = 0 ; i<= (dna_complement.length()-1); i++)
   {
    if(dna_complement[i] == 'a' || dna_complement[i] == 'A'){
        rvs_dna_complement.append("T");
    }

    else if(dna_complement[i] == 't' || dna_complement[i] == 'T'){
        rvs_dna_complement.append("A");
    }

     else if(dna_complement[i] == 'c' || dna_complement[i] == 'C'){
        rvs_dna_complement.append("G");
    }

    else if(dna_complement[i] == 'g' || dna_complement[i] == 'G') {
        rvs_dna_complement.append("C");
    }
   }

    return rvs_dna_complement;
}
#include "dna.h"
#include<iostream>
#include<numeric>

using std::cout;
using std::cin;

int main() 
{

  string dna_string;
  int selection = 0;
  string resume = "Y";

do {

	cout << "1 for Get GC Content" << "\n";
  	cout << "2 for Get DNA Complement" << "\n";
  	cout << "3 for reverse string" << "\n";

    cout << "Enter you choice: "<< "\n";
    cin >> selection;
	

     //clear the input stream error and ignore old characters in stream
	 if (cin.fail())   // source: https://stackoverflow.com/questions/5864540/infinite-loop-with-cin-when-typing-string-while-a-number-is-expected
	 {
         // clear error state
         cin.clear();
         // skip max number of'bad' character(s) possible as well as new line 
         cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	 }


      if(selection == 1){
	    cout << "Enter DNA sequence: ";
    	cin >> dna_string;
        cout << "GC Content: "<<get_gc_content(dna_string)<<"\n";
		}

      else if(selection == 2){
		cout << "Enter DNA sequence: ";
    	cin >> dna_string;
        cout << "DNA Complement: " << get_dna_complement(dna_string) << "\n";
		}

	  else if(selection == 3){
		cout << "Enter DNA sequence: ";
  		cin >> dna_string;
        cout<< reverse_complement(dna_string) << "\n";
		}

      else{
        cout << "Invalid choice" << "\n";
		selection = 0;
		}

	cout<<"Continue? Press \"Y/y\" to continue, otherwise press any key and \"Enter\""<<"\n";
	cin>>resume;

}while( resume == "Y" || resume == "y");

}
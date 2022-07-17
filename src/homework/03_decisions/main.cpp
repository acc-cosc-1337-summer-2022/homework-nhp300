#include "decisions.h"
#include<iostream>

using std::cin;
using std::cout;


int main() 
{
	string letter_grade = "";
	int	credit_hours = 0;
	int total_credits = 0;
	int total_credit_hours = 0;

	do{
		cout<<"\n"<<"Enter Letter grade. To end loop enter \"END\""<<"\n";
		cout<<"Letter grade: ";
		cin>>letter_grade;

		if(letter_grade == "END")
		{
			break;
		}

		cout<<"Enter credit hours: ";
		cin>>credit_hours;
		
		total_credits = total_credits + get_grade_points(letter_grade)*credit_hours;
		total_credit_hours = total_credit_hours + credit_hours;

	} while (letter_grade != "END");
	
	cout<<"GPA: "<<calculate_gpa(total_credit_hours, total_credits);

	if(calculate_gpa(total_credit_hours, total_credits) == -1)
	{
		cout<<"\n"<<"Zero credit hours entered!"<< "\n";
	}

	return 0;
}
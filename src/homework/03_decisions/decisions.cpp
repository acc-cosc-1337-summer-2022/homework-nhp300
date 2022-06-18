#include "decisions.h"

int get_grade_points(string letter_grade)
{
    int grade_points = 0;

    if(letter_grade == "A" || letter_grade == "a")
    {
        grade_points = 4;   
    }
    else if (letter_grade == "B" || letter_grade == "b")
     {
        grade_points = 3;
    }
    else if(letter_grade == "C" || letter_grade == "c" )
    {
        grade_points = 2;
    }
    else if(letter_grade == "D" || letter_grade == "d")
    {
        grade_points = 1;
    }
    else if(letter_grade == "F" || letter_grade == "f")
    {
        grade_points = 0;
    }
    return grade_points;
}


double calculate_gpa(int credit_hours, double credit_points)
{
  double gpa = -1;

   if(credit_hours != 0)
   {
        gpa = credit_points/ credit_hours;
   }

    return gpa;
}
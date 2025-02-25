//write include statement for decisions heade
#include "decisions.h"

using std::string;
//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    string letterGrade = "";


    if (grade >= 90 && grade <= 100)
    {
        letterGrade = "A";
    }
    else if (grade >= 80 && grade <= 89) 
    {
        letterGrade = "B";
    }
    else if (grade >= 70 && grade <= 79) 
    {
        letterGrade = "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        letterGrade = "D";
    }
    else 
    {
        letterGrade = "F";
    }
    return letterGrade;
}

string get_letter_grade_using_switch(int grade){
    int theletterGrade = grade / 10;
    string letterGrade = "";

    switch (theletterGrade)
    {
    case 10:
    case 9:
        letterGrade = "A";
        break;
    case 8:
        letterGrade = "B";
        break;
    case 7:
        letterGrade = "C";
        break;
    
    case 6:
        letterGrade = "D";
        break;

    default:
        letterGrade = "F";
        break;
    }
    return letterGrade;
}
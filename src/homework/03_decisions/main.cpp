//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{

	int choice;
	int grade;

	cout << "Main Menu" << "\n";
	cout << "1 - Letter grade using if" <<"\n";
	cout << "2 - Letter grade using switch" <<"\n";
	cout << "3 - Exit" <<"\n";
	cout << "Enter your choice: " <<"\n";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter numerical grade: ";
		cin >> grade;
		cout << "Letter grade using if: "<< get_letter_grade_using_if(grade) <<"\n";
		break;

	case 2:
		cout << "Enter numerical grade: ";
		cin >> grade;
		cout << "Letter grade using switch: "<< get_letter_grade_using_switch(grade) <<"\n";
		break;
	
	case 3:
		cout << "Exiting the program";
		break;
	
	default:
		cout << "Invalid choice. Exiting the program.";
		break;
	}

	return 0;
}
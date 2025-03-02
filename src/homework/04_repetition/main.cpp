//write include statements

#include <iostream>
#include "repetition.h"

using std::cout;
using std::cin;
//write using statements

int main() 
{
	int choice;
	bool exitprogram = false;

	cout << "Menu:" << "\n";
	cout << "1 - Factorial" << "\n";
	cout << "2 - Greatest Common Divisor (GCD)" << "\n";
	cout << "3 - Exit" << "\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice){
		case 1: {
			int num;
			cout << "Enter a number to calculate factorial: ";
			cin >> num;
			cout << "Factorial of " << num << " is " << factorial(num);
			break;
		}

		case 2: {
			int num1, num2;
			cout << "Enter two numbers to calculate GCD: ";
			cin >> num1 >> num2;
			cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2);
			break;
		}

		case 3: {
			char confirm;
			cout << "Would You Like To Exit? (Y/N): ";
			cin >> confirm;
			if (confirm == 'Y'){
				exitprogram = true;
			}else{
				cout << "Return to main menu";
			}
			break;

		}
	} while (!exitprogram);
	

	cout << "Exiting program";

	return 0;
}

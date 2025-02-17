//write include statements
#include <iostream>
#include "hwexpressions.h"

using std::cin;
using std::cout;

//write namespace using statement for cout

int main()
{

	//write code to use the functions get_sales_tax_amount and get_tip_amount.
//a) Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

//b) Use the cin object to capture the number from the keyboard, assign the number to meal_amount.
	cout << "Enter meal amount: $";
	cin >> meal_amount;
//c) Call the get_sales_tax_amount with meal_amount as its parameter, assign the return value of the 
//function get_sales_tax_amount to the tax_amount variable. 
	tax_amount = get_sales_tax_amount(meal_amount);
//d) Capture the tip rate from keyboard and assign the value to tip_rate variable.
	cout << "Enter tip rate as a decimal: ";
	cin >> tip_rate;
//e) Call the function get_tip_amount with meal_amount and tip_rate as its parameters,set function 
//get_tip_amount return value to tip_amount.
	tip_amount = get_tip_amount(meal_amount, tip_rate);
//f)  Add tip_amount, tax_amount and meal_amount , and save result to total variable.
	total = meal_amount + tax_amount + tip_amount;

//g) Display a receipt (formatting the number decimal spaces is optional): 
//     Meal Amount:           20
//     Sales Tax:              1.35       
//     Tip Amount:            3
//     Total:                    24.35


	cout << "Receipt:" << "\n";
	cout << "Meal Amount:          $" << meal_amount << "\n";
	cout << "Sales Tax:            $" << tax_amount << "\n";
	cout << "Tip Amount:           $" << tip_amount << "\n";
	cout << "Total:                $" << total <<"\n";
	

	return 0;
}

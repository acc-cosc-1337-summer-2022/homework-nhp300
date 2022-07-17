#include "hwexpressions.h"
#include<iostream>
using std::cout;
using std::cin;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount;

	//Finding sales tax amount
	cout<<"Enter meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	//Finding tip amount
	cout<<"Enter tip rate: ";
	cin>>tip_rate;
	tip_amount =  get_tip_amount(meal_amount, tip_rate);
	
	//Total amount
	double total = meal_amount + tax_amount + tip_amount;

	//Receipt printout
	cout << "\nReceipt\n";
	cout << "Meal Amount: "<< meal_amount << "\n";
	cout << "Sales Tax: "<< tax_amount << "\n";
	cout << "Tip Amount: "<< tip_amount << "\n";
	cout << "Total:"<< total << "\n";
	cout << "\nThank you";

	return 0;
}
#include "expressions.h"
#include "hwexpressions.h"

//Functions
double get_sales_tax_amount(double meal_amount)
{
	double tax_amount = meal_amount * tax_rate;

	return tax_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip_amount = meal_amount * tip_rate;
	
	return tip_amount;
}

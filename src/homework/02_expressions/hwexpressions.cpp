//#include "expressions.h"
#include "hwexpressions.h"


//write function code here

const double tax_rate = .0675;

double get_sales_tax_amount(double meal_amount) 
{
	return meal_amount * (tax_rate);

}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate);
}



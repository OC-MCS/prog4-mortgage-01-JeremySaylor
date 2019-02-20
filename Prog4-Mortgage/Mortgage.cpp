#include "Mortgage.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//***********************************************************
// setRate sets the value of the member variable Rate.      *
//***********************************************************

Mortgage::Mortgage()
{
	loan = 10000;
	rate = 6.5;
	years = 15;
}

//***********************************************************
// setRate sets the value of the member variable Rate.      *
//***********************************************************

Mortgage::Mortgage(float l, float r, float y)
{
	loan = l;
	rate = r;
	years = y;
}

//***********************************************************
// setLoan sets the value of the member variable loan.      *
//***********************************************************

void Mortgage::setLoan(float l)
{
	if (l >= 0)
		loan = l;
	else
	{
		cout << "Invalid loan amount\n";
		exit(EXIT_FAILURE);
	}
}

//***********************************************************
// setRate sets the value of the member variable rate.      *
//***********************************************************

void Mortgage::setRate(float r)
{
	if (r >= 0)
		rate = r;
	else
	{
		cout << "Invalid rate\n";
		exit(EXIT_FAILURE);
	}
}

//***********************************************************
// setYears sets the value of the member variable years.    *
//***********************************************************

void Mortgage::setYears(float y)
{
	if (y >= 0)
		years = y;
	else
	{
		cout << "Invalid term length\n";
		exit(EXIT_FAILURE);
	}
}

//***********************************************************
// getLoan returns the value in the member variable loan.   *
//***********************************************************

float Mortgage::getLoan() const
{
	return loan;
}

//*************************************************************
// getRate returns the value in the member variable rate.     *
//*************************************************************

float Mortgage::getRate() const
{
	return rate;
}

//*************************************************************
// getYears returns the value in the member variable years.   *
//*************************************************************

float Mortgage::getYears() const
{
	return years;
}

//************************************************************
// getTerm returns the calulation of Term.                   *
//************************************************************

float Mortgage::getTerm() const
{
	return pow((1 + ((rate/100)/12)), (12 * years));
}

//************************************************************
// getPayment returns the calulation of one month payment.   *
//************************************************************

float Mortgage::getPayment() const
{
	return (loan * (rate/12) * getTerm())/(getTerm()-1)/100;
}

//************************************************************
// getTotalBank returns the calulation of the entire loan.   *
//************************************************************

float Mortgage::getTotalBank() const
{
	return getPayment() * getYears() * 12;
}
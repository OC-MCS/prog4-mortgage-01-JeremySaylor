//===========================================================
//	Jeremy Saylor
//	Due the 20th Feb 2019
//	20 Feb 2019
//	Description: Assignment 4
//===========================================================
#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include "Mortgage.h"

using namespace std;

bool parseInt(string sval, float& val);

int main()
{
Mortgage Home;     

float mortLoan;  
float mortRate;
float mortTerm;
string selection;
bool done = true;
do{	cout << "Enter the loan ammount. ";
	cin >> selection;
	if (!parseInt(selection, mortLoan))
	{
		cout << "Invalid input\n" << endl;
		done = false;
	}
	else{
		if (mortLoan < 0)
		{
			cout << "Invalid loan amount\n" << endl;
			done = false;
		}
		else{
			done = true;
		}
	}
} while (!done );
string selection2;
bool done2 = true;
do{
	cout << "Enter the interest rate. ";
	cin >> selection2;
	if (!parseInt(selection2, mortRate))
	{
		cout << "Invalid input\n" << endl;
		done2 = false;
	}
	else{
		if (mortRate < 0)
		{
			cout << "Invalid interest rate\n" << endl;
			done2 = false;
		}
		else{
			done2 = true;
		}
	}
} while (!done2);
string selection3;
bool done3 = true;
do{	
	cout << "Enter the years to pay off. ";
	cin >> selection3;
	if (!parseInt(selection3, mortTerm))
	{
		cout << "Invalid input\n" << endl;
		done3 = false;
	}else
	{
		if (mortTerm < 0)
		{
			cout << "Invalid interest rate\n" << endl;
			done3 = false;
		}else
		{
			done3 = true;
		}
	}

} while(!done3);

Home.setLoan(mortLoan);
Home.setRate(mortRate);
Home.setYears(mortTerm);

cout << fixed << showpoint << setprecision(2);
cout << endl << endl;
cout << "Here is the Mortgage's data:\n";
cout << "Loan ammount: $" << Home.getLoan() << endl;
cout << setprecision(1);
cout << "Interest rate: " << Home.getRate() << "%" << endl;
cout << "Years: " << Home.getYears() << endl;
cout << setprecision(2);
cout << "The required payments: $" << Home.getPayment() << " per month.\n" << endl;
cout << setprecision(1);
cout << "Total payment to the Bank after " << Home.getYears() << " years is:\n";
cout << setprecision(2);
cout << "$" << Home.getTotalBank() << endl << endl;

return 0;
}
//===========================================================
//parseInt: Function used to check user input and change to 
//a float.
//parameters:
//   sval: the data user entered.
//   val: stof changes sval into a float and it = val.
//return type: bool.
//===========================================================
bool parseInt(string sval, float& val)
{
	float num;
	bool success = true;
	try
	{
		num = stof(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

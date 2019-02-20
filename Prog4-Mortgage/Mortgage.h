#ifndef MORTGAGE_H
#define MORTGAGE_H

// header file for Mortgage class
class Mortgage
{
private:
	float loan;
	float rate;
	float years;
public:
	Mortgage();
	Mortgage(float l, float r, float t);
	void setLoan(float);
	void setRate(float);
	void setYears(float);
	float getLoan() const;
	float getRate() const;
	float getYears() const;
	float getTerm() const;
	float getPayment() const;
	float getTotalBank() const;
};

#endif
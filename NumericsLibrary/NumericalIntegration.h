#pragma once

double payoff(double x);

class NumericalIntegration
{
public:

	NumericalIntegration(int N_, double leftI_, double rightI_) : 
		N{ N_ }, leftI{ leftI_ }, rightI{ rightI_ } {};

	double operator() (double(*f)(double));
private:
	int N;
	double leftI, rightI;
};


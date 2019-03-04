#include "NumericalIntegration.h"

double payoff(double x)
{
	return x * x;
}

double NumericalIntegration::operator() (double(*f)(double))
{
	double result = 0.0;
	double h = (NumericalIntegration::rightI - NumericalIntegration::leftI) / NumericalIntegration::N;
	for (int i = 0; i < N; i++)
	{
		result += ((*f)(NumericalIntegration::leftI + i * h) + (*f)(NumericalIntegration::leftI + (i + 1) * h)) / 2 * h;
	}
	return result;
}

#include "stdafx.h"
#include "calc.h"
#include "iostream"
using namespace std;

void result(double r)
{
	cout  << r;
} 

double sum(double a, double b)
{
	return a + b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double substraction(double a, double b)
{
	return a - b;
}

double division(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
}

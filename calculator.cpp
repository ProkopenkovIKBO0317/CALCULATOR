#include "stdafx.h"
#include "calc.h"
#include "iostream"
using namespace std;

int main()
{
	double a, b, c;
	int select;
	cout << "Enter 2 variables" << endl;
	cin >> a >> b;

	cout << "Select an operation: " << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Division " << endl;
	cout << "4. Multiplication" << endl; 

	cin >> select;

	switch (select) {
	case 1:
		c = sum(a, b);
		break;

	case 2:
		c = substraction(a, b);
		break;

	case 3:
		c = division(a, b);
		break;

	case 4:
		c = multiplication(a, b);
		break;

	default:
		cout << "Error, restart the program";
	}
	result(c);
	cout << endl;

	system("pause");
}

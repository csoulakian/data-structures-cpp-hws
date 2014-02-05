#include "stdafx.h"
#include "Polynomial.h"
#include <iostream>

using namespace std;

double Polynomial::Evaluate(double Value)
{
	int i = 0;
	double result = 0;
	while (i <= Total_Terms)
	{
		result += Poly[i].coefficient*pow(Value, Poly[i].exponent);
		i++;
	}
	return result;
}

void Polynomial::Read_Poly()
{
	int i;
	cout << "Let's read the polynomial." << endl;
	cout << "Enter number of terms in polynomial: ";
	cin >> Total_Terms;
	for (i = 0; i <= Total_Terms; i++)
	{
		cout << "Enter coefficient of " << i + 1 << " term: ";
		cin >> Poly[i].coefficient;
		cout << "Enter exponent of " << i + 1 << " term: ";
		cin >> Poly[i].exponent;
	}
}

void Polynomial::Display_Poly()
{
	int i;
	for (i = 0; i <= Total_Terms; i++)
	{
		cout << Poly[i].coefficient << "x^" << Poly[i].exponent << "+";
	}
	cout << "\b" << endl;
}

void main()
{
	Polynomial A;
	double answer;
	A.Read_Poly();
	answer = A.Evaluate(69.45);               //x=69.45
}

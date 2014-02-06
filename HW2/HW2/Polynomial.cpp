#include "stdafx.h"
#include "Polynomial.h"
#include <iostream>
#include <stdlib.h>

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
	cout << "Enter number of terms in the polynomial: ";
	cin >> Total_Terms;
	for (i = 0; i < Total_Terms; i++)
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
		if (i > 0) {
			cout << "+";
		}
		cout << Poly[i].coefficient << "x^" << Poly[i].exponent;
	}
	//cout << "\b" << endl;
}

Polynomial Polynomial::Add_Poly(Polynomial B)
{
	int a = 0;
	int b = 0;
	int c = 0;

	Polynomial C;

	while (a < Total_Terms && b < B.Total_Terms)
	{
		if(Poly[a].exponent == B.Poly[b].exponent)
		{
			C.Poly[c].coefficient = Poly[a].coefficient + B.Poly[b].coefficient;
			C.Poly[c].exponent = Poly[a].exponent;
			a++;
			b++;
			c++;
		}

		else if(Poly[a].exponent > B.Poly[b].exponent)
		{
			C.Poly[c].coefficient = Poly[a].coefficient;
			C.Poly[c].exponent = Poly[a].exponent;
			a++;
			c++;
		}
		
		else //(A.Poly[a].exponent < B.Poly[b].exponent)
		{
			C.Poly[c].coefficient = B.Poly[b].coefficient;
			C.Poly[c].exponent = B.Poly[b].exponent;
			b++;
			c++;
		}
	}

	while (a < Total_Terms)
	{
		C.Poly[c].coefficient = Poly[a].coefficient;
		C.Poly[c].exponent = Poly[a].exponent;
		a++;
		c++;
	}

	while (b < B.Total_Terms)
	{
		C.Poly[c].coefficient = B.Poly[b].coefficient;
		C.Poly[c].exponent = B.Poly[b].exponent;
		b++;
		c++;
	}
	C.Total_Terms = c - 1;
	return C;
}

void main()
{

	Polynomial A, B, C;
	cout << "Let's read the first polynomial." << endl;
	A.Read_Poly();
	cout << endl << "Now, let's read the polynomial to be added." << endl;
	B.Read_Poly();
	C = A.Add_Poly(B);
	cout << endl << "The solution is ";
	C.Display_Poly();
	cout << endl;

	system("pause"); //pauses the program to view the terminal to see the solution
					// before completing the program which exits the terminal
}

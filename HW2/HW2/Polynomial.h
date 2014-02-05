#pragma once

const int MaxSize = 100;
typedef struct
{
	float coefficient;
	int exponent;
} polynomial_term;

class Polynomial
{
private:
	polynomial_term Poly[MaxSize];
	int Total_Terms;
public:
	Polynomial() { Total_Terms = 0; }
	void Read_Poly();
	void Display_Poly();
	double Evaluate(double value);
	Polynomial Add_Poly(Polynomial B);
	Polynomial Mult_Poly(Polynomial B);
};

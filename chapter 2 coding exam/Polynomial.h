#include <vector>
#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Polynomial;

class Term
{
	friend Polynomial;
private:
	float coef;
	int exp;
};

class Polynomial {
public:
	Polynomial();
	//construct the polynomial p(x) = 0;

	Polynomial Add(Polynomial b);
	//return the sum of the polynomials *this and b
	Polynomial Multiply(Polynomial a, Polynomial b);
	//Polynomial Mult(Polynomial b);
	//return the product of the polynomials *this and b
	float Eval(const float f);
	//float Eval(float f);
	//evaluate the polynomial *this at f and return the result

	void NewTerm(const float theCoeff, const int theExp);
	int Display();
	int GetData();
private:
	static Term *termArray;
	static int capacity;
	static int free;
	int start, finish;
	int terms;
};

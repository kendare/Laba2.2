#pragma once
#include <iostream>

using namespace std;

class Complex
{
	double Re, Im;
public:
	Complex();
	~Complex();
	Complex(double re, double im );
	Complex(const Complex& c);
	const Complex operator+(const Complex& c) const;
	const Complex operator-(const Complex& c) const;
	const Complex operator*(const Complex& c) const;
	Complex operator*(const double c) const;
	const Complex operator/(const Complex& c) const;
	const Complex operator/(const double c) const;
    Complex& operator=(const Complex& right);
	bool operator==(const Complex& c);
	void SetRe(double re);
	void SetIm(double im);
	double GetRe();
	double GetIm();
	friend std::ostream& operator<< (std::ostream& out, Complex& c);
	friend std::istream& operator>> (std::istream& in, Complex& c);
	Complex pow(int a);
	double abs();
};


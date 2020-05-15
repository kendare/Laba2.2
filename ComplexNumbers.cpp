#include "ComplexNumbers.h"
#include <iostream>
#include <cmath>

Complex::Complex()
{
	Re = 0;
	Im = 0;
}


Complex::~Complex()
{
}
Complex::Complex(double re,double im )
{
	Re = re;
	Im = im;
}

Complex::Complex(const Complex& c)
{
	Re = c.Re;
	Im = c.Im;
}
const Complex Complex::operator+(const Complex& c) const
{
	double re = Re+ c.Re;
	double im = Im+ c.Im;
	Complex a(re, im);
	return a;
}
const Complex Complex::operator-(const Complex& c) const
{
	double re = Re- c.Re;
	double im = Im - c.Im;
	Complex a(re, im);
	return a;
}
const Complex Complex::operator*(const Complex& c) const
{
	double re = Re * c.Re - Im * c.Im;
	double im = Im * c.Re + Re * c.Im ;
	Complex a(re, im);
	return a;
}
Complex Complex::operator*(const double c) const
{
	double re = Re * c;
	double im = Im * c;
	Complex a(re, im);
	    return a;
}
const Complex Complex::operator/(const Complex& c) const
{
	double re = (Re*c.Re + Im * c.Im) / (c.Re*c.Re + c.Im*c.Im);
	double im = (Im*c.Re-Re*c.Im) / (c.Re*c.Re + c.Im*c.Im);
	Complex a(re, im);
	return a;
}
const Complex Complex::operator/(const double c) const
{
	double re = Re / c;
	double im = Im / c;
	Complex a(re, im);
	return Complex(a);
}
Complex& Complex::operator=(const Complex &right)
{
	if (this == &right) return *this;
	Re = right.Re;
	Im = right.Im;
	return *this;
}
bool Complex::operator==(const Complex& c)
{
	if (Re == c.Re || Im == c.Im) return true;
	else return false;
}
double Complex::GetRe()
{
	return Re;
}
double Complex::GetIm()
{
	return Im;
}
Complex Complex::pow(int a)
{
	Complex res(*this);
	if (a > 0)
	{
		for (int i = 0; i < a; i++)
		{
			res = res * *this;
		}
	}
	else
	{
		for (int i = 0; i <= a; i++)
		{
			res = res / *this;
		}
	}
	return res;
}
double Complex::abs()
{
	double a;
	a = sqrt(Re * Re + Im * Im);
	return a;
}
void Complex::SetRe(double re)
{
	Re = re;
}
void Complex::SetIm(double im)
{
	Im = im;
}
std::ostream& operator<< (std::ostream& out, Complex& c)
{
	out << c.GetRe() << ' ' << c.GetIm();
	return out;
}
std::istream& operator>> (std::istream& in, Complex& c)
{
	double re, im;
	in >> re;
	in >> im;
	c.SetRe(re);
	c.SetIm(im);
	return in;
}

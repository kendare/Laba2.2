#include "ComplexNumbers.h"
#include <iostream>

void main()
{
	Complex A(1, 1);
	Complex B(2, 1);
	Complex C(A);
	C = A + B * A + A / B;
	cout << C <<"\n\t";
	C = C.pow(4);
	cout << C <<"\n\t";
	double a = B.abs();
	cout << a << "\n\t";
}
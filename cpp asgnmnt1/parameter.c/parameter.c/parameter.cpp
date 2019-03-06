#include<stdio.h>
#include<iostream>
using namespace std;
class Complex
{
	float real;
	float imag;
public:
	Complex()
	{
		real = imag = 0;
			}
	Complex(float val)
	{
		real = imag = val;
	}
	Complex(float r, float i)
	{
		real = r;
		imag = i;
	}
	friend Complex addComplex(const Complex &a, const Complex &b);
	friend Complex mulComplex(const Complex &a, const Complex &b);
	void display()
	{
		if (imag < 0)
		{
			cout << real << (imag) << "i" << endl;
		}
		else
		{
			cout << real << "+" << (imag) << "i" << endl;
		}
	}
	}; 
Complex addComplex(const Complex &a, const Complex &b)
{
	Complex res;
	res.real = a.real + b.real;
	res.imag = a.imag + b.imag;
	return res;
}
	Complex mulComplex(const Complex &a, const Complex &b)
	{
		Complex res;
		res.real = a.real + b.real;
		res.imag = a.imag + b.imag;
		return res;
	}
	int main()
	{
		Complex c1(4, 5), c2(3, 4), c3, c4;
		c3 = addComplex(c1, c2);
		c4 = mulComplex(c1, c2);
		c3.display();
		c4.display();
		system("pause");
		return 0;
	}


	

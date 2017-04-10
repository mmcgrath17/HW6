//ex_05

#include <iostream>

using namespace std;

class Complex
{
private:
	double a;
	double b;

public:
	Complex()
	{
		a = 0;
		b = 0;
	}
	Complex(double x, double y)
	{
		a = x;
		b = y;
	}
	Complex(double x)
	{
		a = x;
		b = 0;
	}

	double getRealPart()
	{
		return a;
	}
	double getImaginaryPart()
	{
		return b;
	}
	Complex operator+(Complex z)
	{
		double tempA = a + z.getRealPart();
		double tempB = b + z.getImaginaryPart();
		return Complex(tempA, tempB);
	}
	Complex operator-(Complex z)
	{
		double tempA = a - z.getRealPart();
		double tempB = b - z.getImaginaryPart();
		return Complex(tempA, tempB);
	}
	Complex operator*(Complex z)
	{
		double tempA = a * z.getRealPart();
		double tempB = b  z.getImaginaryPart();
		return Complex(tempA, tempB);
	}
	Complex operator/(Complex z)
	{
		double tempA = a / z.getRealPart();
		double tempB = b / z.getImaginaryPart();
		return Complex(tempA, tempB);
	}
	Complex operator+=(Complex z)
	{
		return Complex(a + z.getRealPart(), b + z.getImaginaryPart());
	}
	Complex operator-=(Complex z)
	{
		return Complex(a - z.getRealPart(), b - z.getImaginaryPart());
	}
	Complex operator/=(Complex z)
	{
		return Complex(a / z.getRealPart(), b / z.getImaginaryPart());
	}
	Complex operator*=(Complex z)
	{
		return Complex(a * z.getRealPart(), b * z.getImaginaryPart());
	}
	double operator[](int x)
	{
		if (x == 0)
			return a;
		else if (x == 1)
			return b;
		else return 0;
	}
	Complex operator++()
	{
		return Complex(a + 1, b + 1);
	}

	Complex operator--()
	{
		return Complex(a - 1, b - 1);
	}

	Complex Complex::operator++()
	{
		return ++this;
	}
	Complex Complex::operator--()
	{
		return --this;
	}
	void operator<<(Complex z)
	{
		cout << z.getRealPart() << " " << z.getImaginaryPart();
	}
	void operator>>(Complex z)
	{
		double temp1 = z.getRealPart();
		double temp2 = z.getImaginaryPart();

	}


};
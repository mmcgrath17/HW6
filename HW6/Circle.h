//ex_04
#include <cmath>
using namespace std;

class Circle
{
private:
	double radius;
	static int *numberOfObjects;

public:
	Circle()
	{
		radius = 0;
		if (*numberOfObjects == NULL)
		{
			*numberOfObjects = 1;
		}
		else
		*numberOfObjects++;
	}
	Circle(double rad)
	{
		radius = rad;
		*numberOfObjects++;
	}

	double getArea()
	{
		return 3.14159*pow(radius, 2);
	}
	double getRadius()
	{
		return radius;
	}
	void setradius(double radi)
	{
		radius = radi;
	}
	static int numberOfObjects()
	{
		return *numberOfObjects;
	}

	bool operator<(Circle c2)
	{
		if (c2.getRadius()>radius)
		{
			return true;
		}
		else return false;
	}
	bool operator>(Circle c2)
	{
		if (c2.getRadius()>radius)
		{
			return false;
		}
		else return true;
	}
	bool operator<=(Circle c2)
	{
		if (c2.getRadius()>=radius)
		{
			return true;
		}
		else return false;
	}
	bool operator>=(Circle c2)
	{
		if (c2.getRadius() <= radius)
		{
			return true;
		}
		else return false;
	}
	bool operator==(Circle c2)
	{
		if (c2.getRadius() == radius)
		{
			return true;
		}
		else return false;
	}
	bool operator!=(Circle c2)
	{
		if (c2.getRadius() != radius)
		{
			return true;
		}
		else return false;
	}

};
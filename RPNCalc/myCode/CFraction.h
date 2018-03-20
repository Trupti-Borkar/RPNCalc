

#ifndef CFRACTION_H_
#define CFRACTION_H_

#include <iostream>
using namespace std;
class DivideByZeroException: public runtime_error
{
public:
	DivideByZeroException() :
		runtime_error("denominator is zero")
{
}
};

class CFraction
{

	friend CFraction operator+(int const& myint, CFraction const& myfraction);
	friend ostream& operator<<(ostream& out, CFraction const& myfraction);
	friend CFraction operator+(CFraction const& myfraction1,
			CFraction const& myfraction);
	friend CFraction operator+(CFraction const& myfraction, int const& myint);
	friend CFraction operator-(CFraction const& myfraction1,
			CFraction const& myfraction);
	friend CFraction operator-(CFraction const& myfraction, int const& myint);
	friend CFraction operator-(int const& myint, CFraction const& myfraction);
	friend CFraction operator*(CFraction const& myfraction1,
			CFraction const& myfraction);
	friend CFraction operator*(CFraction const& myfraction, int const& myint);
	friend CFraction operator*(int const& myint, CFraction const& myfraction);
	friend CFraction operator/(CFraction const& myfraction1,
			CFraction const& myfraction);
	friend CFraction operator/(CFraction const& myfraction, int const& myint);
	friend CFraction operator/(int const& myint, CFraction const& myfraction);
public:

private:
	long m_numerator;
	long m_denominator;

public:
	void shorten();
	CFraction(long numerator = 0, long denominator = 1);
	void set(long numerator, long denominator);
	double toDouble();
	void print();
	CFraction& operator++();
	CFraction operator++(int);

};

#endif /* CFRACTION_H_ */

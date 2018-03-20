
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <stdlib.h>
#include "CFraction.h"
#include "CLifoBuffer.h"
#include "CRpnCalculator.h"
using namespace std;

ostream& operator<<(ostream& out, CFraction const& myfraction)
{
	out << "Fraction is " << "(" << myfraction.m_numerator << "/"
			<< myfraction.m_denominator << ")";
	return out;
}

int main(void)
{
	// TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "RPNCalc gestarted." << endl << endl;
	CFraction f1;
	CFraction f2(1, 3);
	CFraction f3(2, 3);
	CFraction f4(3, 3);
	cout << "Normal Print" << endl;
	f3.print();

	cout << "To Double" << endl;
	cout << f2.toDouble()<< endl;

	cout << "Fraction and fraction addition" << endl;
	cout << f2 + f3 << endl;//f2.operator+f3, f2-this pointer

	cout << "Fraction and integer addition" << endl;
	cout << f2 + 3 << endl;

	cout << "integer and fraction addition" << endl;
	cout << 3 +2+ f2+1 << endl;

	CFraction f(1, 3);
	CFraction g; g = ++f;
	cout << "++f == " << f << "; (g=++f) == " << g << endl;
	f.set(1,3); g = f++;
	cout << "f++ == " << f << "; (g=f++) == " << g << endl;

	cout<<endl;
	cout<<"LIFO buffer tests"<<endl;
	CLifoBuffer mybuffer;

	mybuffer.push(f2);
	mybuffer.push(f3);
	mybuffer.push(f4);
	mybuffer.print();
	CFraction myloc;
	mybuffer.pop(myloc);
	mybuffer.print();
	myloc.print();

	cout<<endl;
	cout<<"RPN calc tests"<<endl;
	CRpnCalculator mycalc;
	mycalc.pushvalue(f2);
	mycalc.pushvalue(f3);
	mycalc.pushvalue(f4);
	mycalc.add();
	CFraction myresult;
	mycalc.popresult(myresult);
	myresult.print();


	return 0;
}

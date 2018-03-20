

#ifndef CRPNCALCULATOR_H_
#define CRPNCALCULATOR_H_
#include "CFraction.h"
#include "CLifoBuffer.h"
class CRpnCalculator
{
private:
	CLifoBuffer stack;
public:
bool pushvalue(const CFraction& data );
bool popresult( CFraction& data );
void add();
void subtract();
void multiply();
void divide();

};

#endif /* CRPNCALCULATOR_H_ */

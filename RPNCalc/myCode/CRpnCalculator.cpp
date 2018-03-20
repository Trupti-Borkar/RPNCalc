

#include "CRpnCalculator.h"

bool CRpnCalculator::pushvalue(const CFraction& data)
{
	return (stack.push(data));

}

bool CRpnCalculator::popresult(CFraction& data)
{
	return (stack.pop(data));
}

void CRpnCalculator::add()
{
	CFraction myfrac1;
	CFraction myfrac2;

	if(stack.pop(myfrac1)&&(stack.pop(myfrac2)))
	{
     stack.push(myfrac1+myfrac2);

	}
}

void CRpnCalculator::subtract()
{CFraction myfrac1;
CFraction myfrac2;

if(stack.pop(myfrac1)&&(stack.pop(myfrac2)))
{
 stack.push(myfrac1-myfrac2);

}

}

void CRpnCalculator::multiply()
{
	CFraction myfrac1;
	CFraction myfrac2;

	if(stack.pop(myfrac1)&&(stack.pop(myfrac2)))
	{
	 stack.push(myfrac1*myfrac2);

	}

}

void CRpnCalculator::divide()
{
	CFraction myfrac1;
	CFraction myfrac2;

	if(stack.pop(myfrac1)&&(stack.pop(myfrac2)))
	{
	 stack.push(myfrac1/myfrac2);

	}
}

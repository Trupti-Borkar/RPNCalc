

#include "CFraction.h"

void CFraction::shorten()
{
}

CFraction::CFraction(long numerator, long denominator)
{m_numerator=numerator;
m_denominator=denominator;
if(m_denominator==0) throw (DivideByZeroException());
}

void CFraction::set(long numerator, long denominator)
{
	m_numerator=numerator;
	m_denominator=denominator;

	if(m_denominator==0) throw (DivideByZeroException());
}

double CFraction::toDouble()
{
return ((double)m_numerator/m_denominator);
}

void CFraction::print()
{
	cout<<"CFraction[m_numerator = "<<m_numerator<<" ; "<<"m_denominator = "<<m_denominator<<"]"<<endl;

}

CFraction& CFraction::operator ++()
{
	this->m_numerator=(this->m_numerator+this->m_denominator);

	return *this;
}

CFraction CFraction::operator ++(int int1)
{
	CFraction myfrac;
	myfrac=*this;
	++(*this);

	return myfrac;
}


CFraction operator + (CFraction const& myfraction1,CFraction const& myfraction)
{
	CFraction myfrac;
	myfrac.m_numerator = ((myfraction1.m_numerator*myfraction.m_denominator)+(myfraction1.m_denominator*myfraction.m_numerator));
	myfrac.m_denominator =(myfraction1.m_denominator)*(myfraction.m_denominator);
		return myfrac;
}

CFraction operator + (CFraction const& myfraction,int const& myint)
{
	CFraction myfrac;
	myfrac.m_numerator = ((myfraction.m_numerator)+(myfraction.m_denominator*myint));
myfrac.m_denominator=myfraction.m_denominator;
		return myfrac;
}


CFraction operator+(int const& myint,CFraction const& myfraction)
{
	CFraction mylocalfraction;

	mylocalfraction.m_numerator = ((myfraction.m_numerator)+(myfraction.m_denominator*myint));
	mylocalfraction.m_denominator =myfraction.m_denominator;
			return mylocalfraction;

}


CFraction operator - (CFraction const& myfraction1,CFraction const& myfraction)
{
	CFraction myfrac;
	if((myfraction1.m_numerator*myfraction.m_denominator)>=(myfraction1.m_denominator*myfraction.m_numerator))
	{
		myfrac.m_numerator = ((myfraction1.m_numerator*myfraction.m_denominator)-(myfraction1.m_denominator*myfraction.m_numerator));

	}
	else
	{

		myfrac.m_numerator = ((myfraction1.m_denominator*myfraction.m_numerator)-(myfraction1.m_numerator*myfraction.m_denominator));

	}
	myfrac.m_denominator =(myfraction1.m_denominator)*(myfraction.m_denominator);
		return myfrac;
}

CFraction operator - (CFraction const& myfraction,int const& myint)
{
	CFraction myfrac;
	if((myfraction.m_numerator)>=(myfraction.m_denominator*myint))
	{
		myfrac.m_numerator = ((myfraction.m_numerator)-(myfraction.m_denominator*myint));
	}
	else
	{
		myfrac.m_numerator = ((myfraction.m_denominator*myint)-(myfraction.m_numerator));
	}

myfrac.m_denominator=myfraction.m_denominator;
		return myfrac;
}


CFraction operator-(int const& myint,CFraction const& myfraction)
{
	CFraction mylocalfraction;
	if((myfraction.m_numerator)>=(myfraction.m_denominator*myint))
		{
		mylocalfraction.m_numerator = ((myfraction.m_numerator)-(myfraction.m_denominator*myint));
		}
		else
		{
			mylocalfraction.m_numerator = ((myfraction.m_denominator*myint)-(myfraction.m_numerator));
		}

	mylocalfraction.m_denominator =myfraction.m_denominator;
			return mylocalfraction;

}


CFraction operator * (CFraction const& myfraction1,CFraction const& myfraction)
{
	CFraction myfrac;
	myfrac.m_numerator = ((myfraction1.m_numerator*myfraction.m_numerator));
	myfrac.m_denominator =(myfraction1.m_denominator)*(myfraction.m_denominator);
		return myfrac;
}

CFraction operator * (CFraction const& myfraction,int const& myint)
{
	CFraction myfrac;
	myfrac.m_numerator = ((myfraction.m_denominator*myint));
myfrac.m_denominator=myfraction.m_denominator;
		return myfrac;
}


CFraction operator*(int const& myint,CFraction const& myfraction)
{
	CFraction mylocalfraction;

	mylocalfraction.m_numerator = ((myfraction.m_denominator*myint));
	mylocalfraction.m_denominator =myfraction.m_denominator;
			return mylocalfraction;

}


CFraction operator / (CFraction const& myfraction1,CFraction const& myfraction)
{
	CFraction myfrac;
	myfrac.m_numerator = (myfraction.m_denominator);
	myfrac.m_denominator =(myfraction.m_numerator);
	myfrac=myfrac*myfraction1;

		return myfrac;
}

CFraction operator / (CFraction const& myfraction,int const& myint)
{
	CFraction myfrac;
		myfrac.m_numerator = 1;
		myfrac.m_denominator =myint;
		myfrac=myfrac*myfraction;
		return myfrac;
}


CFraction operator/(int const& myint,CFraction const& myfraction)
{
	CFraction myfrac;
			myfrac.m_numerator = myfraction.m_denominator;
			myfrac.m_denominator =myfraction.m_numerator;
			myfrac=myint*myfraction;
			return myfrac;

}


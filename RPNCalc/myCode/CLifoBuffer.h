

#ifndef CLIFOBUFFER_H_
#define CLIFOBUFFER_H_
#include "CFraction.h"
class CLifoBuffer
{
int m_size;
int m_tos;
CFraction* m_pBuffer;

public:
	CLifoBuffer(int size=10);
	~CLifoBuffer();
	void print();
	bool push(const CFraction& data);
	bool pop(CFraction& data);

};

#endif /* CLIFOBUFFER_H_ */

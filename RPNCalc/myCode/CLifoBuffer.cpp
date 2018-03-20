

#include "CLifoBuffer.h"

CLifoBuffer::CLifoBuffer(int size)
{
	m_pBuffer = new CFraction[size];
	m_tos = -1;
	m_size = size;

}

void CLifoBuffer::print()
{

	cout<<"printing LIFO BUffer"<<endl;
for(int i=0 ; i<=m_tos;i++)
{
	cout<<m_pBuffer[i]<<endl;

}
}

bool CLifoBuffer::push(const CFraction& data)
{
	if (m_tos < m_size)
	{
		m_tos++;
		m_pBuffer[m_tos] = data;
		return true;

	}
	return false;
}

CLifoBuffer::~CLifoBuffer()
{
	delete[] m_pBuffer;
}

bool CLifoBuffer::pop(CFraction& data)
{
	if (m_tos >=0)
		{
		data=m_pBuffer[m_tos] ;
			m_tos--;

			return true;

		}
		return false;

}

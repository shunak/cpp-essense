#include <memory.h>

class CIntArray{
	public:
		int m_anum[100];

		CIntArray();
};

//Constructor
CIntArray::CIntArray()
{
	//memset function is a function which assign data by byte unit.
	memset(m_anum,0,sizeof m_anum);
}


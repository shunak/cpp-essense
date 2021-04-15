#include <memory.h>

class CIntArray
{
	public:
		int m_anum[100];

		CIntArray();
};

// Constructor
CIntArray::CIntArray()
{
		memset(m_anum, 0, sizeof m_anum);
}



#include <stddef.h>

class CIntArray
{
	// member variable
	private:
		int* m_pnum; // dynamic array
		int m_nNumOf; // num of elements of array
	// get other info
	public:
		bool Success();
		int NumOf();
		int SizeOf();
	// omit other members
};

// if conserve memory is successed or not
bool CIntArray::Success()
{
	return m_pnum != NULL;
}

// num of elements of array
int CIntArray::NumOf()
{
	return m_nNumOf;
}

// Size of array
int CIntArray::SizeOf()
{
	return m_nNumOf*sizeof*m_pnum;
}






#include <iostream.h>
#include <memory.h>
#include <process.h>
#include "intarray.h"

using namespace std;

// constructor
CIntArray::CIntArray(const int nNumOf)
{
	m_pnum = new int[nNumOf];
	if(m_pnum == NULL)
		m_nNumOf = 0;
	else
	{
		m_nNumOf = nNumOf;
		memset(m_pnum, 0, nNumOf * sizeif *m_pnum);
	}

	cout << "Constructor is called."
		<< "Num of the elements is " << m_nNumOf << ". " << endl;
}


// Destructor
CIntArray::~CIntArray()
{
	if(m_pnum != NULL)
		delete [] m_pnum;

	cout  << "Destructor is called. "
		<< "Num of the elements is " << m_nNumOf << ", " << endl;
}

// Access function to member
// Getter
int CIntArray::Get(const int index)
{
	CheckIndex(index);
	return m_pnum[index];
}
// Setter
void CIntArray::Set(const int index, const int value)
{
	CheckIndex(index);
	m_pnum[index]=value;
}
// Checker to index
void CIntArray::CheckIndex(const int index)
{
	if((unsigned int)index < (unsigned int)m_nNumOf)
		return;
	cout << "Invalid index value!" << endl
		<<"value: " << index << endl;
	exit(1);
}













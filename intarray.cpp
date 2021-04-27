#include <iostream.h>
#include <memory.h>
#include <process.h>
#include "intarray.h"

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
}




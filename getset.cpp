#include <iostream>
#include <process.h>

#define ELEM(array) (sizeof (array) / sizeof *(array))

using namespace std;

class CIntArray
{
	public:
		int m_anum[100];

		CIntArray();
		int Get(const int index);
		void Set(const int, const int value);
		void CheckIndex(const int index);
};

// Access Function to member
int CIntArray::Get(const int index)
{
	CheckIndex(index);
	return m_anum[index];
}

void CIntArray::Set(const int index, const int value)
{
	CheckIndex(index);
	m_anum[index] = value;
}

//Check Index
void CIntArray::CheckIndex(const int index)
{
	if((unsigned int)index < ELEM(manum))
		return;

	cout << "invalid index value!" << endl
		<< "value : " << index << endl;
	exit(1);
}









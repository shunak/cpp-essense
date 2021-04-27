#ifndef __INTARRAY_H_INCLUDED__
#define __INTARRAY_H_INCLUDED__

class CIntArray
{
	//member variable
private:
	int* m_pnum; // dynamic array
	int m_nNumOf; // num of array elements

	// constructor destructor
public:
	CIntArray(const int nNumOf);
	~CIntArray();

	// access function to member
public:
	int Get(const int index);
	void Set(const int index, const int value);

	// check of index
private:
	void CheckIndex(const int index);
};

#endif


#include <ipstream>
#include "IntArray.h"

void Visss(const int num)
{
	cout << "Viss: No," << num << endl;
}


CIntArray a(10);


int main()
{
	CIntArray b(20);
	Viss(1);

	CIntArray c(30);
	Viss(2);

	{
		CIntArray(40);
		Viss(3);
	}
	Viss(4);

	return 0;



}

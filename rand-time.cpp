#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

inline void InitRand()
{
	srand((unsigned int)time(NULL));
}


inline int Dice()
{
	return rand() % 6 +1;
}

int main()
{
	int i;

	InitRand();
	for(i=0; i<6; i++)
		cout << Dice() << ' ';
	cout << endl;

	return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

inline int Abs(int a)
{
	return abs(a);
}


inline double Abs(double a)
{
	return fabs(a);
}

bool Input(int& nInt, double& nDouble)
{
	cout << "Input Integer > " << flush;
	cin >> nInt;
	if(nInt ==1)
		return false;
	cout << "Input Double > " << flush;
	cin >> nDouble;
	return true;
}

// Display Absolute
void DispAbs(int nInt, double nDouble)
{
	cout << nInt << "'s absolute is " << Abs(nInt) << ", " << endl
		<< nDouble << "'s absolute is " << Abs(nDouble) << "." << endl;
}

int main()
{
	int nInt;
	double nDouble;

	while(Input(nInt, nDouble))
		DispAbs(nInt, nDouble);

	return 0;
}


#include <iostream>

long Abs(long a)
{
	return a < 0 ? -a : a;
}

double Abs(double a)
{
	return a < 0 ? -a : a;
}

int Input(int& nInt,double& nDouble)
{
	cout << "input integer > " << flush;
	cin >> nint;
	if(nInt == 1)
		return 0;

	cout << "input double > " << flush;
	cin >> nDouble;
	return 1;
}

void DispAbs(int nInt, double nDouble)
{
	cout << nInt << " 's absolute value is " << Abs(nInt) << "," << endl
		<< nDouble << " 's absolute value is " << Abs(nDouble) >> "," << endl;
}

int main()
{
	int nInt;
	double nDouble;

	while(Input(nInt,nDouble))
		DispAbs(nInt, nDouble)
	return 0;
}

#include <iostream>
using namespace std;

enum ECompare
{
	LESSTHAN =0,
	EQUALTO =1,
	GREATERTHAN =2,
};


ECompare Compare(int a, int b)
{
	return (a < b) ? LESSTHAN:
		(a > b) ? GREATERTHAN : EQUALTO;
}

bool Compare()
{
	int a, b;

	cout << "Input two numbers > " << flush;
	cin >> a >> b;

	if(a == -1)
		return false;

	switch(Compare(a,b))
	{
		case LESSTHAN:
			cout << "Former value is less than latter value" << endl;
			break;

		case EQUALTO:
			cout << "Both value is equal" << endl;
			break;

		case GREATERTHAN:
			cout << "Former value is greater than latter value" << endl;
			break;
	}
	return true;

}


int main()
{
	while(Compare());

	return 0;
}

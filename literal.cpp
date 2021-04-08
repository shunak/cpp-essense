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
	return (a < b) ? LESSTHAN: (a > b) ? GREATERTHAN : EQUALTO;
}

bool Compare()
{
	const char* pszResult[]={
		"Former value is less than latter.",
		"Both value is equal.",
		"Former value is greater than latter.",
	};

	int a, b;

	cout << "Input two numbers > " << flush;
	cin >> a >> b;

	if(a==-1)
		return false;
	cout << pszResult[Compare(a,b)] << endl;

	return true;
}


int main()
{
	while(Compare());

	return 0;
}

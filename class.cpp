#include <iostream>

using namespace std;

// about reference: http://www7b.biglobe.ne.jp/~robe/cpphtml/html01/cpp01037.html


#define ELEM(array) (sizeof(array) / sizeof*(array))

class SStudent
{
	public:
	char szName[16];
	int nJaoanese;
	int nMath;
	int nEnglish;
};


void Disp(const SStudent& student)
{
	cout << "name: " << student.szName << endl
		<< "Japanese: " << student.nJaoanese << "point, "
		 "Math: " << student.nMath << "point. "
		 "English: " << student.nEnglish << "point. "<<endl;
}


int main(){

	SStudent students[]={
		{"A", 23,45,56},
		{"B", 46,67,89},
		{"C", 12,34,56},
	};

	int i;

	for(i=0; i<ELEM(students); i++)
		Disp(students[i]);

	return 0;

}

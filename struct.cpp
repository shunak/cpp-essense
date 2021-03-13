#include <iostream>

#define ELEM(array) (sizeof (array) / sizeof*(array))

using namespace std;

struct SStudent
{
	char szName[16];
	int nJapanese;
	int nMath;
	int nEnglish;
};

void Disp(const SStudent& student)
{
	cout << "name: " << student.szName << endl
		<< "Japanese: " << student.nJapanese <<" point,"
		"Math: " << student.nMath << " point,"
		"English: " << student.nEnglish << " point" << endl;
}


int main()
{
	SStudent students[] = {
		{"Aoi Ryo", 74,99,86,},
		{"Sakai Shoji", 65, 47, 39},
		{"Kitise Tei", 77,79,68},
	};

	int i;

	for(i=0; i<ELEM(students); i++){
		Disp(students[i]);
	}


	return 0;
}

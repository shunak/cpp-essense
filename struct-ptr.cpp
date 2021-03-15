#include <iostream>

using namespace std;

#define ELEM(array) (sizeof (array) / sizeof*(array))

typedef struct dummy_SStudent
{
	char szName[16];
	int nJapanese;
	int nMath;
	int nEnglish;
} SStudent;



void Disp(const SStudent* pstudent)
{
	cout << "name: " << pstudent->szName << endl
	<< "Japanese: " << pstudent->nJapanese << " point, "
		"Math: " << pstudent->nMath << " point, "
		"English: " << pstudent->nEnglish << " point" << endl;
}

int main()
{
	SStudent students[] = {
		{"Aoi Ko", 89,99,87,},
		{"Kujirai Shouta", 77,50,38,},
		{"Ushio Toki", 77,87,70,},
	};

	int i;

	for(i=0; i<ELEM(students); i++){
		Disp(&students[i]);
	}

	return 0;
}







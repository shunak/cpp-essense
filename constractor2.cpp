#include <iostream>

#define ELEM(array) (sizeof (array) / sizeof *(array))

using namespace std;


class SStudent
{
    public:
        char szName[16];
        int nJapanese;
        int nMath;
        int nEnglish;

        void Disp();
};



void SStudent::Disp()
{
    cout << "name : " << szName << endl
        << "Japanese : " << nJapanese << "point,"
        "Math : " << nMath << "point, "
        "Engilsh : " << nEnglish << "point" << endl;
}

int main()
{
    SStudent students[] = {
        {"aoi yuu", 44, 5, 7},
        {"kaitou aiko", 44, 65, 37},
        {"hirose Zuzu", 24, 12, 67},
    };
    int i;

    for(i=0; i<ELEM(students); i++)
        students[i].Disp();

    return 0;


}






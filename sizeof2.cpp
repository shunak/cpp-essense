#include <iostream>

using namespace std;

void DispSize(const char* array){
	cout << "Size of this array is " << sizeof array << " byte." << endl;
}

int main(){
	char data1[100];
	char data2[200];

	DispSize(data1);
	DispSize(data2);;

	return 0;
}

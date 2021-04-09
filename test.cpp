#include <iostream>

using namespace std;


int main(){

	char array[2] = {
		1,2
	};

	cout << sizeof(array) << endl;
	cout << sizeof*(array) << endl;
	return 0;

}

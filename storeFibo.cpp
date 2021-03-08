#include <iostream>
using namespace std;

void StoreFibo(int* array, int nSize){
	int i;

	if(nSize<0)
		return;
	array[0]=1;
	if(nSize==1)
		return;
	array[1]=1;

	for(i=2; i<nSize;i++){
		array[i] = array[i-1]+array[i-2];
	}
}

void DispFibo(const int* array, int nSize){
	int i;
	for(i=0; i<nSize; i++){
		cout << array[i] << endl;
	}
}

int main(){
	int nFibo[100];

	StoreFibo(nFibo,sizeof nFibo / sizeof *nFibo);
	DispFibo(nFibo,sizeof nFibo /sizeof *nFibo);
	return 0;
}

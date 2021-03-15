#include <iostream>

using namespace std;

int main(){
	const int KUKU_LIMIT = 9;
	int nKuKu[KUKU_LIMIT][KUKU_LIMIT];
	int i,j;

	for(i=1;i<=KUKU_LIMIT;i++){
		for(j=1;j<=KUKU_LIMIT;j++){
			nKuKu[i-1][j-1]=i*j;
		}
	}


	cout << " 1 2 3 4 5 6 7 8 9" << endl;
	for(i=1; i<=KUKU_LIMIT; i++){
		cout << i << " ";
		for(j=1; j<=KUKU_LIMIT; j++){
			cout << nKuKu[i-1][j-1] << " ";
		}
		puts(" ");
	}

	return 0;







}

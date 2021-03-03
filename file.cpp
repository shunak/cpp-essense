#include <stdio.h>

int main(){
	FILE* pFile; // pointer to structure FILE

	pFile = fopen("test.txt","w");
	fputs("write in file",pFile);
	fclose(pFile);

	return 0;
}

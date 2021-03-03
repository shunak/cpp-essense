#include <stdio.h>

int main(){
	FILE* pFile;

	pFile = fopen("test.txt","w");
	fputs("write in file",pFile);
	fclose(pFile);

	return 0;
}

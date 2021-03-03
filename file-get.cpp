#include <stdio.h>

int main(){
	FILE* pFile;
	char buffer[128];

	pFile = fopen("test.txt","r");
	fgets(buffer,128,pFile);
	printf("%s\n",buffer);
	fclose(pFile);

	return 0;
}


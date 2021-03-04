#include <stdio.h>
#include <string.h>

int main(){
	FILE* pFile;
	char buffer[512];
	int i;

	printf("Input something string > ");
	gets(buffer);

	pFile = fopen("fprint.txt","w");
	fprintf(pFile,"%lu\n",strlen(buffer));
	for(i=0;buffer[i];i++)
		fprintf(pFile,"%02X ",(unsigned char)buffer[i]);
	fclose(pFile);

	return 0;
}

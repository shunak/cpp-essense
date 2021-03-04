#include <stdio.h>

int main(){
	FILE* pFile;
	int nLength;
	int temp;
	int i;

	pFile = fopen("fprint.txt","r");
	if(pFile==NULL)
		return 0;
	fscanf(pFile,"%d",&nLength);
	printf("Length of the string is %d byte \n", nLength);

	for(i=0;i<nLength;i++)
	{
		fscanf(pFile,"%x",&temp);
		putchar(temp);
	}
	puts("\n");

	return 0;
}

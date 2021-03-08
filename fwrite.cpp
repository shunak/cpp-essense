#include <stdio.h>
#include <string.h>

int main()
{
    FILE* pFile;
    char buffer[512];
    int nLength;

    printf("Input something string > ");
    gets(buffer);

    pFile = fopen("fwrite.txt", "wb");

    nLength = strlen(buffer);
    fwrite(&nLength, 4, 1, pFile);
    fwrite(buffer, 1, nLength + 1, pFile);

    fclose(pFile);


    return 0;
}

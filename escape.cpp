#include <iostream>
#include <stdio.h>

using namespace std;

void DumpLetterCode(const char* str)
{
	for(; *str; str++)
		printf("%02X ",(unsigned char)*str);
	cout << endl;
}

int main()
{
	DumpLetterCode("\"\'\?\\");
	DumpLetterCode("\a\b\t\n\v\f\r");
	DumpLetterCode("\xab""\x0ab""\xa""b");
	DumpLetterCode("\11111");
	DumpLetterCode("c:\new\abc");
	DumpLetterCode("c:\\new\\abc");

	return 0;

}

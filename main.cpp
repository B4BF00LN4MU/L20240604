#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	FILE* fp = fopen("Map.txt", "r");
	char c = 0;
	char line[80];
	
	//EOF가 뭔데 End Of File? 파일의 끝이냐 라는데?
	
	while (fgets(line, 80, fp) != nullptr)
	{
		cout << line;
	}
	

	fgetc(fp);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string Content;

	ifstream InputFile;
	
	InputFile.open("data.map");

	while (InputFile.getline(Content, 80))
	{
		cout << Content << endl;
	}

	InputFile.close();

	//FILE* fp = fopen("Map.txt", "r");
	//char c = 0;
	//char line[80];
	//
	////EOF�� ���� End Of File? ������ ���̳� ��µ�?
	//
	//while (fgets(line, 80, fp) != nullptr)
	//{
	//	cout << line;
	//}
	
	return 0;
}
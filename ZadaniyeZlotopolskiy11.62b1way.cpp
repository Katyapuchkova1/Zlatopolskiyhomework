#include "stdafx.h";
#include <iostream>
using namespace std;


int main()

{
	int line, stroka, number;
	int s = 0;
	int mas[3][4];
	for (int i = 0; i <= 3 - 1; i++)
	{
		for (int j = 0; j <= 4 - 1; j++)
		{
			cout << "Write number" << endl;
			cin >> number;
			mas[i][j] = number;
		}
	}

	for (int j = 0; j <= 4 - 1; j++)
	{
		for (int i = 0; i <= 3 - 1; i++)
		{
			s = s + mas[i][j];
		}

		cout << s << " - The sum of " << j << " column" << endl;
		s = 0;
	}
	system("Pause");
	return 0;
}

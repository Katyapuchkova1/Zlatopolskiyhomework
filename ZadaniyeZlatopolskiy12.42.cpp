﻿#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int number;
	int mas[18][36];
	for (int i = 0; i <= 17; i++)

	{
		for (int j = 0; j <= 35; j++)
		{
			cout << "Write number - 0 or 1" << endl;
			cin >> number;
			mas[i][j] = number;
		}

	}

	for (int i = 0; i <= 17; i++)

	{
		for (int j = 0; j <= 35; j++)
		{
			cout << mas[i][j] << "  ";
		}

		cout << endl;


	}
	system("Pause");
	return 0;
}

﻿#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	int number;
	int const quontity = 6;
	int mas[quontity];
	for (int i = 0; i <= quontity - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= quontity - 2; i++)

	{
		if (mas[i] % 2 == 0 && mas[i + 1] % 2 == 0)
		{
			n++;
		}
	}

	cout << n << endl;
	system("Pause");
	return 0;

}

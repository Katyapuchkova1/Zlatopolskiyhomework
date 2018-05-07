#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int number, lastage;
	int agemax = 2019;
	int mas[30];
	for (int i = 0; i <= 3; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= 3; i++)
	{

		if (mas[i] <= agemax)
		{
			agemax = mas[i];
			lastage = i;
		}
	}
	cout << lastage << " - The number of the last elder one " << endl;
	system("Pause");
	return 0;

}

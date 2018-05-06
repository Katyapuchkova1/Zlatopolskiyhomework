#include <iostream>
#include "stdafx.h"
using namespace std;


int main()
{

	int number, lastage;
	int agemax = 2028;
	int mas[30];
	for (int i = 0; i <= 30 - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= 30 - 1; i+=1)
	{

		if (mas[i] < agemax)
		{
			agemax = mas[i];
			lastage = i;
		}
	}
	
	cout <<lastage<< " - The number of the first elder one " << endl;
	system("Pause");
	return 0;

}

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int lastnumberplus, number, s, n;
	int firstnumberminus = 4;
	int const quontity = 3;
	int mas[quontity];
	for (int i = 0; i <= quontity - 1; i++)
	
	{
		cout << "Write number" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		if (mas[i] > 0)

		{
			lastnumberplus = i;
			s = mas[i];
		}

		if (firstnumberminus > i && mas[i] < 0)

		{
			firstnumberminus = i;
			n = mas[i];
		}

		
	}

	mas[firstnumberminus] = s;
	mas[lastnumberplus] = n;
	
	for (int i = 0; i <= quontity - 1; i++)

	{
		cout << mas[i] << endl;
	}
	system("Pause");
	return 0;
}


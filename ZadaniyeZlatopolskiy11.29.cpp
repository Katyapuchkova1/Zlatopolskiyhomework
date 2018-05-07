#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int number;
	int s = 0;
	int s2 = 0;
	int const quontity = 5;
	int mas [ quontity ];
	for (int i = 0; i <= quontity - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= quontity - 1; i++)
	{

		s += mas[i];
		s2 += pow (mas[i], 2);
	}

	if (s % 2 == 0)
	{
		cout << "The sum of elements is even" << endl;
	}

	else if (s % 2 != 0)

	{
		cout << "The sum of elements is odd" << endl;
	}

	if (s2 >= 10000 && s2 <= 99999)

	{
		cout << "The sum of square elements is 5-figure number" << endl;
	}

	else if (s2 < 10000 && s2 > 99999)

	{
		cout << "The sum of square elements is not 5=figure number" << endl;
	}

	system("Pause");
	return 0;

}

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int b, a, c, number;
	cout << "Write quontity of the elements" << endl;
	int const quontity = 5;
	int mas [quontity];
	cout << "Write b" << endl;
	cin >> b;
	cout << "Write a" << endl;
	cin >> a;
	cout << "Write c" << endl;
	cin >> c;
	for (int i = 0; i <= quontity - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		mas[i] = number;
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		if (mas[i] == 0)

		{
			mas[i] = mas[i] + c;
		}

		else if (mas[i] < 0)

		{
			mas[i] = mas[i] - b;
		}

		else if (mas[i] > 0)

		{
			mas[i] = mas[i] - a;
		}
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		cout << mas[i] << endl;
	}

	system("Pause");
	return 0;

}

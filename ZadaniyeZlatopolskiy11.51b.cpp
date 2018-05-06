#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int b, a, c, quontity, number;
	cout << "Write quontity of the elements" << endl;
	cin >> quontity;
	int mas[quontity];
	cout << "Write b" << endl;
	cin >> b;
	cout << "Write a" << endl;
	cin >> a;
	cout << "Write c" << endl;
	cin >> c;
	int mas[quontity];
	for (int i = 0; i <= quontity - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		number = mas[i];
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		if (mas[i] == 0)

		{
			mas[i] = mas[i] + c;
		}

		if (mas[i] < 0)

		{
			mas[i] = mas[i] - b;
		}

		if (mas[i] > 0)

		{
			mas[i] = mas[i] - a;
		}
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		cout << mas[i];
	}

	system("Pause");
	return 0;

}

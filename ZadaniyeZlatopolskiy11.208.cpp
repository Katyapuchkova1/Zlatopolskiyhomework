#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int lastelement, number;
	const int quontity = 7;
	int mas[quontity];
	for (int i = 0; i <= quontity - 1; i++)
	{
		cout << "Write element of the massiv" << endl;
		cin >> number;
		number = mas[i];
	}
	for (int i = 0; i <= quontity - 1; i++)
	{
		if (mas[i - 1] < mas[i] && mas [i] > mas[i + 1])

		{
			lastelement = i - 2;
		}
	}

	for (int i = 0; i <= lastelement - 1; i++)
	{
		cout << mas[i] << endl;
	}
	system("Pause");
    return 0;
}


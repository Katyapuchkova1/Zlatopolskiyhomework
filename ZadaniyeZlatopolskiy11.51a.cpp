#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int b, a1, number;
	int const quontity = 5;
	int mas [quontity];
	cout << "Write b"<< endl;
	cin >> b;
	cout << "Write a1, be attentive it must less then quontity " << endl;
	cin >> a1;
	int mas[quontity];
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
			mas[i] = mas[i] - b;
		}

		else if (mas[i] < 0)

		{
			mas[i] = mas[i] + mas[a1];
		}
	}

	for (int i = 0; i <= quontity - 1; i++)

	{
		cout << mas[i];
	}
	
	system("Pause");
	return 0;

}

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int b, a1, quontity, number;
	cout << "Write quontity of the elements" << endl;
	cin >> quontity;
	int mas [quontity];
	cout << "Write b"<< endl;
	cin >> b;
	cout << "Write a1, be attentiv it must less then quontity " << endl;
	cin >> a1;
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
			mas[i] = mas[i] - b;
		}

		if (mas[i] < 0)

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



#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int number;
	int n = 1;
	int max2, Zifra, k, a, nomerendmax2, nomerbeginmax1, nomerbeginmax2;
	int nomerendmax1 = 0;
	int max1 = 0;
	cout << "Write number" << endl;
	cin >> number;
	while (number > 0)
	{
		Zifra = number % 10;
		
		if (Zifra > max1)
		{
			max2 = max1;
			max1 = Zifra;
			nomerendmax2 = nomerendmax1;
			nomerendmax1 = n;
		}

		else if (Zifra > max2)

		{
			max2 = Zifra;
			nomerendmax2 = n;
		}

		if (n == 0)
		{
			max1 = max2;
		}
		n++;
		number = number / 10;
	}
	nomerbeginmax1 = n - nomerendmax1;
	nomerbeginmax2 = n - nomerendmax2;
	cout << nomerbeginmax1 << endl << nomerendmax1 << endl << nomerbeginmax2 << endl << nomerendmax2 << endl;
	system("Pause");
	return 0;

}



#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	double k;
	int i = 0;
	int n = 0;

	for (int i = 1; i <= 300; i++)
	{
		k = i;
		n = 0;
		for (int s = 1; s <= 300; s++)
		{
			k = k / s;
			if ((float)(int) k == k)
			{
				n++;
			}
			
			else if ((float)(int) k != k)
			{
				k = k * s;
			}

		}
		
		if (n == 5)
		{
			cout << i << endl;
		}

	}

	system("Pause");
	return 0;
}

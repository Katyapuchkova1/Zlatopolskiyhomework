// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()

{
	int m, n, k;
	int l = 0;
	cout << "Write last number" << endl;
	cin >> m;
	cout << "Write stepen" << endl;
	cin >> n;
	for (int i = 1; i <= m; i++)
	{
		k = i;
		for (int s = 2; s <= n; s+=2)
		{
			k = k * k;
		}
		l += k;
	}

	cout << l << endl;
	system("Pause");
	return 0;
}


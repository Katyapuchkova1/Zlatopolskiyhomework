// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()

{
	int s;
	for (int i = 1; i <= 9; i++)
	{
		for (int n = 1; n <= 9; n++)
		{
			s = i + n;
			cout << i << " + " << n << " = " << s << endl;
		}
	}
	system("Pause");
	return 0;
}

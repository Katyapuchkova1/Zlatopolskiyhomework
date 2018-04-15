#include <iostream>
using namespace std;


int main()
{
	int g, m, n;
	cout << "Write n, m, n" << endl;
	cin >> n >> m >> g;

	if (((g % 4 == 0) && (n == 29) && (m == 2)) || ((n == 30) && (m % 2 == 0) && (m < 12)) || ((n == 31) && (m % 2 == 1)) || ((n == 28) && (m == 2) && (g % 4 != 0)))

	{
		n = 1;
		m += 1;
	}

	else if ((m == 12) && (n == 31))
	{
		n = 1;
		m = 1;
		g += 1;
	}
	else if (((n < 29) && (m == 2) && (g % 4 == 0)) || ((n < 30) && (m % 2 == 0)) || ((n < 31) && (m % 2 == 1)) || ((n < 28) && (m == 2)))

	{
		n += 1;
	}

	cout << n << " " << m << " " << g << endl;
	system("Pause");
	return 0;
}

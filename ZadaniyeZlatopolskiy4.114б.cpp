#include <iostream>
using namespace std;


int main()
{
	int g, m, n;
	cout << "Write n, m, n" << endl;
	cin >> n >> m >> g;

    if (n > 1)

    {
    n -= 1;
    }

    else if ((g % 4 == 0) && (n == 1) && (m == 3))

        {
        n = 29;
        m = 2;
        }

    else if ((g % 4 != 0) && (n == 1) && (m == 3))

        {
        n = 28;
        m = 2;
        }

    else if ((n == 1) && (m % 2 == 1) && m > 1)

        {
        n = 30;
        m -= 1;
        }

    else if ((n == 1) && (m % 2 == 0) && m != 2)

        {
        n = 31;
        m -= 1;
        }

    else if ((n == 1 && m == 1))

        {
        n = 31;
        m = 12;
        g -= 1;
        }

    cout << n << " " << m << " " << g << endl;
	system("Pause");
	return 0;
}

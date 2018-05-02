#include <iostream>
using namespace std;


int main()
{
	int max = 0;
	int min = 0;
	int i = 1;
	int Rasnost;

	while (i < 8)

	{
		cout << "Write height" << endl;
		cin >> n;
		if (n > max)
		{
			max = n;
		}

		if (i = 1)

		{
			min = max;
		}

		if (n < min)
		{
			min = n;
		}
		i++;
	}

	Rasnost = max - min;
	cout << Rasnost << endl;
	system("Pause");
	return 0;
}

#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "How old are you?" << endl;
	cin >> n;
	if ((n % 10 == 1) && (n != 11))
	{
		cout << "Mne" << " " << n << " " << "god" << endl;
	}
	else if (((n >= 5) && (n <= 20)) || ((n % 10 >= 5) && (n % 10 <= 9)) || (n % 10 == 0))
	{
		cout << "Mne" << " " << n << " " << "let" << endl;
	}
	else
	{
		cout << "Mne" << " " << n << " " << "goda" << endl;
	}

	system("Pause");
	return 0;
}

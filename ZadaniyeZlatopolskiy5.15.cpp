#include <iostream>
using namespace std;


int main()
{
	int n, s;
	cout << "Write n" << endl;
	cin >> n;
	for (int i = 1; i <= 9; i++)
	{
		s = n * i;
		cout << n * i << "=" << s << endl;
	}

	system("Pause");
	return 0;
}
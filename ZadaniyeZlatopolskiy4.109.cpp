#include <iostream>
using namespace std;

int main()

{
	int number;
	cout << "Write number" << endl;
	cin >> number;
	switch (number)
	{
	case 6: cout << "Six" << endl;
		break;
	case 7: cout << "Seven" << endl;
		break;
	case 8: cout << "Eight" << endl;
		break;
	case 9: cout << "Nine" << endl;
		break;
	case 10: cout << "Ten" << endl;
		break;
	case 11: cout << "Jack" << endl;
		break;
	case 12: cout << "Queen" << endl;
		break;
	case 13: cout << "King" << endl;
		break;
	case 14: cout << "Ace" << endl;
		break;
	}
	system("Pause");
	return 0;
}

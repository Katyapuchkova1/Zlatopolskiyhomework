#include <iostream>
using namespace std;

int main()

{
	int number;
	cout << "Write number" << endl;
	cin >> number;
	switch (number)
	{
	case 6: cout << "Шестерка" << endl;
		break;
	case 7: cout << "Семерка" << endl;
		break;
	case 8: cout << "Восьмерка" << endl;
		break;
	case 9: cout << "Девятка" << endl;
		break;
	case 10: cout << "Десятка" << endl;
		break;
	case 11: cout << "Валет" << endl;
		break;
	case 12: cout << "Дама" << endl;
		break;
	case 13: cout << "Король" << endl;
		break;
	case 14: cout << "Туз" << endl;
		break;
	}
	system("Pause");
	return 0;
}
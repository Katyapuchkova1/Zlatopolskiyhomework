#include <iostream>
using namespace std;


int main()
{

int number = 0;
int i = 1;
int l = 0;
int min = 0;
int max = 0;
int nomerminend = 0;
int nomermaxend = 0;
int nomermaxbegin = 0;
int nomerminbegin = 0;

cout <<"Write number"<<endl;
cin >>number;

while (number != 0)

    {
    int l = number % 10;
    if (l > max)

        {
        max = l;
        nomermaxend = i;
        }

    if (i = 1)

        {
        min = max;
        }

    if (l < min)

        {
        min = l;
        nomerminend = i;
        }

    i++;

    number = number / 10;
    }

nomermaxbegin = i - nomermaxend;
nomerminbegin = i - nomerminend;
cout<<nomermaxbegin<<" "<<nomermaxend<<" "<<nomerminbegin<<" "<<nomerminend<<endl;
system("Pause");
return 0;
}

#include <iostream>
using namespace std;


int main()

{

int lastnumber = 0;
int number = 0;
int l = 0;
cout <<"Write number"<<endl;
cin >>number;
while (lastnumber <= l || number )

    {
    int l = number % 10;
    if (lastnumber <= l)
        {
        number = number / 10;
        lastnumber = l;
        }
    }

    if (number = 0)
        {
        cout <<"Yes!"<<endl;
        }
    else if (number != 0)

        {
        cout <<"No!("<<endl;
        }
 system ("Pause");
 return 0;
}

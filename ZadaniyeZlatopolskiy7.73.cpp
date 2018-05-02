#include <iostream>
using namespace std;


int main()
    {
    int min1 = 0;
    int min2 = 0;
    int max1 = 0;
    int max2 = 0;
    int i = 1;
    int n;

    while (n != 8)

        {
        cout <<"Write numbers"<<endl;
        cin >>n;
        if (n > max1)
            {
            max2 = max1;
            max1 = n;
            }

        if (i = 1)

            {
            max1 = min1;
            }

        if (n < min1)

            {
            min2 = min1;
            min1 = n;
            }
         i += 1;
        }
        cout <<max1<<" "<<max2<<" "<<min1<<" "<<min2;
        system ("Pause");
        return 0;
    }

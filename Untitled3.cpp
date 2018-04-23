#include <iostream>
using namespace std;


int main()

    {
    int s = 1;
    int i = 1;
    int n = 1;
    int lastn = 1;
    int DifferentNumbers = 1;
    do
    {
    lastn = n;
    cout<<"Write numbers"<<endl;
    cin >>n;
    if (lastn = n)
        {
        i++;
        }

    s++;
    }

    while (n != 1000);

    DifferentNumbers = s - i;
    cout<<DifferentNumbers<<endl;
    system("Pause");
    return 0;
    }


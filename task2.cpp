#include <iostream>
using namespace std;
int main1()
{
    setlocale(LC_ALL, "Russian");
    int m,d;
    cin>>m>>d;
    if ((d > 31||((d > 30) && (m == 4 || m == 6 || m == 9 || m == 11)) || (d> 28 && m == 2)) || m > 12 || m < 11)
    {
        cout << "Ошибка";
    }
    else if (m == 1)
    {
        cout<< 365 - d;
    }
    else if (m == 2)
    {
        cout<< 365 - d -31;
    }
    else if (m == 3 )
    {
        cout<< 365 - 59 - d;
    }
    else if (m == 4 || m == 5)
    {
        cout<< 365 - d - m * 30;
    }
return 0;
}

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin>>a;
    if ((a % 1000 == a)&& (a % 100 != a) )
        {
        cout<<"Верно"<<endl;
        }
    else{cout<<"Неверно"<<endl; }
return 0;
}

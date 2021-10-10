#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int a,b;
    setlocale(LC_ALL, "Russian");
    srand( time(0) );
    a = rand() % 6 +1;
    b = rand() % 6 +1;
    cout <<"первый кубик "<<a<<"\n"<<"второй кубик "<<b<<"\n"<<"сумма "<<a+b;
    return 0;
}

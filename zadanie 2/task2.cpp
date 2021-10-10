#include <iostream>


using namespace std;
int fib(int n)
    {
    int a,b,c;
    a=1;
    b=1;
    for (int i = 2; i <n; i ++ )
    {
        c = b;
        b=b+a;
        a=c;
    };
    return b;
    }
int main()
{
    int a;
    cin>>a;
    cout<<fib(a);
}


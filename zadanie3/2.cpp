#include <iostream>

using namespace std;
void rec(int a){
        if (a  == 0 || a == 1){
            cout<< a<<endl;}
            else {
            rec(a / 2);
            cout<< a % 2<<endl;
            }
         }

int main()
{
    int a;
    cin >>a;
    rec(a);
    return 0;
}

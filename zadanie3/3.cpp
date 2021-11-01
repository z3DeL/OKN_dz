#include <iostream>

using namespace std;
void rec(int a,int del){
       if (a != 1) {
          if (a % del == 0 ){
            cout<< del<<endl;
            return rec(a / del, del);}
            else { return rec(a, del +1);}
         }}
void prime(int n){
rec(n,2);}
int main()
{
    int a;
    cin >>a;
    prime(a);
    return 0;
}

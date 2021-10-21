//#include <iostream> из десятичной в двоичную

//using namespace std;
//void rec(int a){
//        if (a  == 0 || a == 1){
//            cout<< a<<endl;}
//            else {
//            rec(a / 2);
//            cout<< a % 2<<endl;
//            }
//         }
//
//int main()
//{
//    int a;
//    cin >>a;
//    rec(a);
//    return 0;
//}
#include <iostream>
// из двоичной в десятичную
using namespace std;
void rec(int a, int sum,int k){ if (a % 10 == a){ cout<< a  * k + sum;}
   else  {rec(a / 10, sum + (a % 10) * k, k * 2);
   }
}
void conv(int n){
rec(n,0,1);}
int main()
{
int b;
cin >>b;
conv(b);
return 0;
}

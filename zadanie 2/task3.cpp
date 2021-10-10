#include <iostream>
#include <math.h>

using namespace std;
int delsum(int a){
    int sum = 1;
for (int i = 2; i <round(sqrt(a))+1; i ++ ){
        if (a % i == 0){
            sum = sum + i + a / i;
        }};
    return(sum);}

void drch(){
    int b;
    for (int i = 1; i <= 10000; i ++ ){
        b = delsum(i);
        if ((delsum(b) == i) and (b > i))
            {
            cout<<i<<" "<<b<<"\n";
            }
        }
    }

int main()
{
    drch();
}


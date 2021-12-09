#include <iostream>

#include<time.h>

using namespace std;

void print_array(int**array, int n, int m) {

for (int i = 0; i < n; i++) {

for (int j = 0; j < m;j++) {

cout << array[i][j] << " ";

}cout << endl;

}

}

void random_array(int **array, int n, int m) {

for (int i = 0; i < n; i++) {

for (int j = 0; j < m;j++) {

array[i][j] = rand()%90+10;

}

}

}



void perest(int **array, int n){
int i_min = 0, j_min = 0;


for (int i = 0; i < n; i++) {

for (int j = 0; j < n;j++) {

if ((array[i][j] < array[i_min][j_min] && array[i][j]>0) || array[i_min][j_min]<=0 ) {

i_min = i; j_min = j;

}}}
cout<<i_min<<endl<<j_min<<endl;
for (int i = 0; i < n;i++){
    int temp = array[i][j_min];
    array[i][j_min]=array[i_min][i];
    array[i_min][i]=temp;
}
}

int main()
{
   srand(time(0));

int n;

cin >> n ;

int** mas = new int* [n];

for (int i = 0; i < n; i++) {

mas[i] = new int[n];

}
random_array(mas,  n,  n);



print_array(mas, n, n);
cout<<endl;
perest(mas,n);
print_array(mas,n,n);
return 0;
}

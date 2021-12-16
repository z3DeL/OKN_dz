#include <iostream>

#include<time.h>

using namespace std;

void delete_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}

void print_array(int**array, int n, int m) {

for (int i = 0; i < n; i++) {

    for (int j = 0; j < m;j++) {

    cout << array[i][j] << " ";

}cout << endl;

}}

void random_array(int **array, int n, int m) {

for (int i = 0; i < n; i++) {

    for (int j = 0; j < m;j++) {

    array[i][j] = rand()%90+10;

}}}



void perest(int **array, int n,int m){
int mass[5];
int max=array[0][0];

for (int i = 0; i < n; i++) {
    max=array[i][0];

    for (int j = 0; j < m;j++) {

    if ((array[i][j] > max ) ) {

    max=array[i][j];

    }}mass[i]=max;}
for (int i = 1; i < n;i++){
        int min_str=0;
   for (int j=0;j<m;j++){
    if(array[i][j]<array[i][min_str]){
        min_str=j;
    }}
    array[i][min_str]=mass[i-1];
   }

}


int main()
{
   srand(time(0));

int n,m;

cin >> n >>m ;

int** mas = new int* [n];

for (int i = 0; i < n; i++) {

mas[i] = new int[m];

}
random_array(mas,  n,  m);



print_array(mas, n, m);
cout<<endl;
perest(mas,n,m);
print_array(mas,n,m);
 delete_array(mas,n);
return 0;
}

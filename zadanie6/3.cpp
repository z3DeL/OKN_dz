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

}

}}

void transpose(int **array, int n, int m){
 if (n<=m){
  for (int i = 0; i < n; i++)
    {
        for (int j = m-n; j < m - i - 1; j++)
        {
            int temp=array[i][j];
            array[i][j]= array[n-j-1+m-n][m-i-1];
            array[n-j-1+m-n][m-i-1]=temp;
        }
    }

}
else  {for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            int temp=array[i][j];
            array[i][j]= array[m-j-1][m-i-1];
            array[m-j-1][m-i-1]=temp;
        }
    }

}}


int main() {

srand(time(0));

int n, m;

cin >> n >> m;

int** mas = new int* [n];

for (int i = 0; i < n; i++) {

mas[i] = new int[m];

}
random_array(mas,  n,  m);
print_array(mas, n, m);

transpose(mas,n, m);

print_array(mas,n,m);

delete_array(mas,n);
}

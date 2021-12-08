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

void transpose(int **array, int n, int m){
 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp=array[i][j];
            array[i][j]= array[n-j-1][n-i-1];
            array[n-j-1][n-i-1]=temp;
        }
    }

}


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
if (n == m) {
transpose(mas,n, m);

print_array(mas,n,m);}
else { cout<<"wrong dimention";}

}

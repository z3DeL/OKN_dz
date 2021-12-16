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




    
int** arr_del(int** array, int n, int m){
int i_min = 0, j_min = 0;

for (int i = 0; i < n; i++) {

    for (int j = 0; j < m;j++) {

    if (array[i][j] < array[i_min][j_min]) {

    i_min = i; j_min = j;

}}}

for (int i  = i_min; i < n - 1; i++){
    for (int j = 0; j < m; j++){
        array[i][j] = array[i + 1][j];}}
        for (int i = 0; i < n; i++){
    for (int j = j_min; j < m - 1; j++){
        array[i][j] = array[i][j + 1];}}

int** array_new = new int* [n];

for (int i = 0; i < n-1; i++) {

    array_new[i] = new int[m-1];}
for (int i = 0; i < n-1; i++) {

    for (int j = 0; j < m-1;j++) {

    array_new[i][j] = array[i][j];
}}
return array_new;}


void delete_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
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

print_array(arr_del(mas,n,m),n-1,m-1);
delete_array(mas, n);

return 0;

}

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

void pr_matr(int **array1, int n, int m,int **array2,int n1,int m1){
int** array_ans = new int* [n];


for (int i = 0; i < n; i++) {
  array_ans[i] = new int[m1];}
  
for(int i = 0; i < n; i++){
  for(int j = 0; j < m1; j++)
    { array_ans[i][j]=0;}}

for(int i = 0; i < n; i++){
  for(int j = 0; j < m1; j++){
    for(int k = 0; k < m; k++)
      {
      array_ans[i][j]+=array1[i][k]*array2[k][j];
      }}}
  
print_array(array_ans, n, m1);
delete_array(array, n);
}


int main() {

srand(time(0));

int n, m,n1,m1;

cin >> n >> m>>n1>>m1;

int** mas = new int* [n];

for (int i = 0; i < n; i++) {

mas[i] = new int[m];

}
random_array(mas,  n,  m);
print_array(mas, n, m);
int** mas1 = new int* [n1];

for (int i = 0; i < n1; i++) {

  mas1[i] = new int[m1];

}
random_array(mas1,  n1,  m1);


print_array(mas1, n1, m1);
if ( m != n1){cout<<"wrong dimention";}
else{
pr_matr(mas, n,m,mas1,n1,m1);}
  
delete_array (mas1, n);
  
delete_array (mas2, n1);
return 0;

}

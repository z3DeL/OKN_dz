#include<iostream>

#include<ctime>

using namespace std;



void random_array(int* array, int size) {

for (int i = 0; i < size; i++) {

array[i] = rand()%90+10;//%90   0..89   +10   10..99

}

}



void print_array(int *array, int size) {

for (int i = 0; i < size; i++) {

cout << array[i] << " ";

}cout << endl;

}



void reverse(int* array, int size) {

for (int i = 0; i < size/2; i++) {

int tmp = array[i];

array[i] = array[size - i - 1];

array[size - i - 1] = tmp;

}

}

void move_to_left(int* array, int begin, int end) {

int tmp = array[begin];

for (int i = begin; i < end; i++) {

array[i] = array[i + 1];

}

array[end] = tmp;

}



void move_to_right(int* array, int begin, int end) {

int tmp = array[end];

for (int i = end; i > begin; i--) {

array[i] = array[i - 1];

}

array[begin] = tmp;

}



void qsort(int* array, int begin, int end) {
if (end - begin <= 1) return;

else {int mid = (begin+end) / 2;

for (int i = begin; i < end; i++) {

if (array[i] > array[mid] && i < mid) {

move_to_left(array, i, mid);

mid--;

i--;

}

if (array[i] < array[mid] && i>mid) {

move_to_right(array, mid, i);

mid++;

}

}
qsort(array, begin, mid);

qsort(array, mid, end);

}}

void qsort_Hoar(int* array, int size) {

int begin = 0;

qsort(array, begin, size);

}



int main() {

srand(time(0));

//динамические массивы

int n;

cin >> n;

int* mas = new int[n];

random_array(mas, n);

print_array(mas, n);

qsort_Hoar(mas, n)
print_array(mas, n);


}

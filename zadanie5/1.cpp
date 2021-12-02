#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
void delspace(char st[],const int k){
    int j=0;
    for (int i = 0; i < strlen(st); i++) {
		if (st[i] != ' ') {
			st[j] = tolower(st[i]);
			j++;
		}

	}
	st[j] = '\0';
}
void first(char str[],const int k ){
    int a = 0;
    int len =strlen(str)/2+1;
    for (int i=0;i<len ;i++){
    if (str[i] != str[strlen(str)-i-1]){a = 1;}}
    if (a == 0){
        cout<<"палиндром";
    }
    else {cout<<"не палиндром";
    };
}

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    const int k = 50;
	char s[k];
    cin.getline(s, k);
    delspace(s,k);
    first(s,k);
    return 0;
}

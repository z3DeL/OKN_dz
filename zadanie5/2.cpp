#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <cctype>
using namespace std;
void second(char str[],const int k){
    char number[50];
    int j=0;
    int sum = 0;
     for (int i=0;i<strlen(str) ;i++){
        if (str[i] != '+'){
            number[j] = str[i];j++;}
        else {int num=stoi(number);
            sum = sum + num;
            for(int i=0;i<50;i++)number[i]=' ';}
     }
     sum +=stoi(number);
     cout<<sum;
}

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    const int k = 50;
	char s[k];
    cin.getline(s, k);
    second(s,k);
    return 0;
}

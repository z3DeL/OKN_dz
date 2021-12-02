#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <cctype>
using namespace std;
void third(char str[],const int k){
    string fam="";
    int flag = 0;
    string ans="";
     for (int i=0;i<strlen(str) ;i++){
        if (str[i] != ' ' and flag == 0){
            fam += str[i];}
        else {if (str[i] == ' '){flag=1;}
        else {if (flag == 1) {ans += str[i];
        ans += '.'; flag = 2;}}}
     }
     ans += fam;
     cout<<ans;
}

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    const int k = 50;
	char s[k];
    cin.getline(s, k);
    third(s,k);
    return 0;
}

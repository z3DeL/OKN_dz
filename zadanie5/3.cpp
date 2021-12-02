#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <cctype>
using namespace std;
void third(char str[],const int m){
    char fam[50];
    int flag = 0;
    char ans[50];
    int j=0;
    int k=0;
     for (int i=0;i<strlen(str) ;i++){
        if (str[i] != ' ' and flag == 0){
            fam[j] = str[i];
            j++;}
        else {if (str[i] == ' '){flag=1;}
        else {if (flag == 1) {ans[k] = str[i];
        k++;
        ans[k]='.'; flag = 2;k++;}}}
     }
     fam[j]='\0';
     cout<<fam<<endl;
          for (int ij=0;ij<j;ij++){
        ans[k]=fam[ij];
        k++;
     };
     ans[k]='\0';
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

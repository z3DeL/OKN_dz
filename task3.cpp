#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,r1,r2,r3,r4,r5,r6,r7,r8;
    string n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n30,n40,n50,n60,n70,n80,n90,n100,n200,n300,n400,n500,n600,n700,n800,n900;
    cin>>a;
    r1 = a / 10000000;
    r2 = a /1000000 % 10;
    r3 = a /100000 % 10;
    r4 = a /10000 % 10;
    r5 = a /1000 % 10;
    r6 = a /100 % 10;
    r7 = a /10 % 10;
    r8 = a % 10;
    n1=" один";
    n2=" два";
    n3=" три";
    n4=" четыре";
    n5=" пять";
    n6=" шесть";
    n7=" семь";
    n8=" восемь";
    n9=" девять";
    n10=" десять";
    n11=" одиннадцать";
    n12=" двенадцать";
    n13=" тринадцать";
    n14=" четырнадцать";
    n15=" пятнадцать";
    n16=" шестнадцать";
    n17=" семнадцать";
    n18=" восемнадцать";
    n19=" девятнадцать";
    n20=" двадцать";
    n30=" тридцать";
    n40=" сорок";
    n50=" пятьдесят";
    n60=" шестьдесят";
    n70=" семьдесят";
    n80=" восемьдесят";
    n90=" девяносто";
    n100=" сто";
    n200=" двести";
    n300=" триста";
    n400=" четыреста";
    n500=" пятьсот";
    n600=" шестьсот";
    n700=" семьсот";
    n800=" восемьсот";
    n900=" девятьсот";
    switch(r1)
    {
    case 1:
        switch(r2)
        {
        case 0:
            cout<< n10 <<" миллионов";
            break;
        case 1:
            cout<< n11 << " миллионов";
            break;
        case 2:
            cout<< n12 << " миллионов";
            break;
        case 3:
            cout<< n13 << " миллионов";
            break;
        case 4:
            cout<< n14 << " миллионов";
            break;
        case 5:
            cout<< n15 << " миллионов";
            break;
        case 6:
            cout<< n16 << " миллионов";
            break;
        case 7:
            cout<< n17 << " миллионов";
            break;
        case 8:
            cout<< n18 << " миллионов";
            break;
        case 9:
            cout<< n19 << " миллионов";
            break;
        }
        break;
    case 2:
         cout<< n20;
         break;
    case 3:
         cout<< n30;
         break;
    case 4:
         cout<< n40;
         break;
    case 5:
         cout<< n50;
         break;
    case 6:
         cout<< n60;
         break;
    case 7:
         cout<< n70;
         break;
    case 8:
         cout<< n80;
         break;
    case 9:
         cout<< n90;
         break;
    }
    if (r1 !=1)
            switch(r2)
    {
        case 0:
             if (r1 != 0) cout<<" миллионов";
            break;12312
        case 1:
            cout<< n1 << " миллион";
            break;
        case 2:
            cout<< n2 << " миллиона";
            break;
        case 3:
            cout<< n3 << " миллиона";
            break;
        case 4:
            cout<< n4 << " миллиона";
            break;
        case 5:
            cout<< n5 << " миллионов";
            break;
        case 6:
            cout<< n6 << " миллионов";
            break;
        case 7:
            cout<< n7 << " миллионов";
            break;
        case 8:
            cout<< n8 << " миллионов";
            break;
        case 9:
            cout<< n9 << " миллионов";
            break;
        };
    switch(r3)
    {
    case 1:
        cout<<n100;
        break;
    case 2:
        cout<<n200;
        break;
    case 3:
        cout<<n300;
        break;
    case 4:
        cout<<n400;
        break;
    case 5:
        cout<<n500;
        break;
    case 6:
        cout<<n600;
        break;
    case 7:
        cout<<n700;
        break;
    case 8:
        cout<<n800;
        break;
    case 9:
        cout<<n900;
        break;
    }
        switch(r4)
    {
    case 1:
        switch(r5)
        {
        case 0:
            cout<< n10 <<" тысяч";
            break;
        case 1:
            cout<< n11 << " тысяч";
            break;
        case 2:
            cout<< n12 << " тысяч";
            break;
        case 3:
            cout<< n13 << " тысяч";
            break;
        case 4:
            cout<< n14 << " тысяч";
            break;
        case 5:
            cout<< n15 << " тысяч";
            break;
        case 6:
            cout<< n16 << " тысяч";
            break;
        case 7:
            cout<< n17 << " тысяч";
            break;
        case 8:
            cout<< n18 << " тысяч";
            break;
        case 9:
            cout<< n19 << " тысяч";
            break;
        }
        break;
    case 2:
         cout<< n20;
         break;
    case 3:
         cout<< n30;
         break;
    case 4:
         cout<< n40;
         break;
    case 5:
         cout<< n50;
         break;
    case 6:
         cout<< n60;
         break;
    case 7:
         cout<< n70;
         break;
    case 8:
         cout<< n80;
         break;
    case 9:
         cout<< n90;
         break;
    }
      if (r4 !=0)
      switch(r5)
    {
        case 0:
            cout<<" тысяч";
            break;
        case 1:
            cout<< n1 << " тысяча";
            break;
        case 2:
            cout<< n2 << " тысячи";
            break;
        case 3:
            cout<< n3 << " тысячи";
            break;
        case 4:
            cout<< n4 << " тысячи";
            break;
        case 5:
            cout<< n5 << " тысяч";
            break;
        case 6:
            cout<< n6 << " тысяч";
            break;
        case 7:
            cout<< n7 << " тысяч";
            break;
        case 8:
            cout<< n8 << " тысяч";
            break;
        case 9:
            cout<< n9 << " тысяч";
            break;
        };
    switch(r6)
    {
    case 1:
        cout<<n100;
        break;
    case 2:
        cout<<n200;
        break;
    case 3:
        cout<<n300;
        break;
    case 4:
        cout<<n400;
        break;
    case 5:
        cout<<n500;
        break;
    case 6:
        cout<<n600;
        break;
    case 7:
        cout<<n700;
        break;
    case 8:
        cout<<n800;
        break;
    case 9:
        cout<<n900;
        break;
    }
        switch(r7)
    {
    case 1:
        switch(r8)
        {
        case 0:
            cout<< n10;
            break;
        case 1:
            cout<< n11;
            break;
        case 2:
            cout<< n12;
            break;
        case 3:
            cout<< n13;
            break;
        case 4:
            cout<< n14;
            break;
        case 5:
            cout<< n15;
            break;
        case 6:
            cout<< n16;
            break;
        case 7:
            cout<< n17;
            break;
        case 8:
            cout<< n18;
            break;
        case 9:
            cout<< n19;
            break;
        }
        break;
    case 2:
         cout<< n20;
         break;
    case 3:
         cout<< n30;
         break;
    case 4:
         cout<< n40;
         break;
    case 5:
         cout<< n50;
         break;
    case 6:
         cout<< n60;
         break;
    case 7:
         cout<< n70;
         break;
    case 8:
         cout<< n80;
         break;
    case 9:
         cout<< n90;
         break;
    }
     if (r7 !=0)
     switch(r8)
    {
        case 0:
            break;
        case 1:
            cout<< n1;
            break;
        case 2:
            cout<< n2;
            break;
        case 3:
            cout<< n3;
            break;
        case 4:
            cout<< n4;
            break;
        case 5:
            cout<< n5;
            break;
        case 6:
            cout<< n6;
            break;
        case 7:
            cout<< n7;
            break;
        case 8:
            cout<< n8;
            break;
        case 9:
            cout<< n9;
            break;
        };
return 0;
}

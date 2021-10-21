 void  rec (int a)
{
    if (a > 0)
    {
        rec(a / 10);
        cout << (a % 10) << endl;
    }
}

int main()
{
    int a;
    cin >>a;
    rec(a);
    return 0;
}

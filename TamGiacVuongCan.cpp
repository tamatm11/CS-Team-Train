#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <random>
#include <algorithm>
#include <cstring>
using namespace std;

void a(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j<=i)
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void b(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j>=i)
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void c(int n, int m)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout<<" ";
        }
        for (int t = 1; t <= i; t++)
        cout<<"* ";
        cout<<endl;
    }
}

int main()
{
    /*Vẽ tam giác cân thoả mãn điều kiện:
    a) Cạnh góc vuông bên cạnh trái và cạnh dưới màn hình.
    b) Cạnh góc vuông bên cạnh trái và cạnh trên màn hình.
    c) Tam giác đều có một cạnh dưới màn hình.
    */
    int n, m;
    cout<<"Nhap 1 de lam cau a), 2 de lam cau b), 3 de lam cau c): ";
    cin>>n;
    while (true)
    {
        if (n!=1 && n!=2 && n!=3)
        {
            cout<<"Nhap lai: ";
            cin>>n;
        }
        else
        break;
    }
        cout<<"Nhap so bat ki tu tu 1 - 10: ";
        cin>>m;
        while (true)
        {
            if (m > 10)
            {
                cout<<"Nhap lai: ";
                cin>>m;
            }
            else
            break;
        }
        if (n==1)
        a(n, m);
        else if (n==2)
        b(n, m);
        else
        c(n, m);
    return 0;
}
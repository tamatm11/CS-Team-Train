#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <random>
#include <algorithm>
#include <cstring>
using namespace std;

//TASK: Convert dec to bin, dec to hex, dec to oct và ngược lại.

void DoiSoTLP1 (int o)
{
   string d;
   if (o == 10)
   {
      d = 'A';
      cout<<d;
   }
   else if (o == 11)
   {
      d = 'B';
      cout<<d;
   }
   else if (o == 12)
   {
      d = 'C';
      cout<<d;
   }
   else if (o == 13)
   {
      d = 'D';
      cout<<d;
   }
   else if (o == 14)
   {
      d = 'E';
      cout<<d;
   }
   else if (o == 15)
   {
      d = 'F';
      cout<<d;
   }
}

void DoiHeTP (int a, int b)
{
   if (b==2 || b==8)
   {
      int n;
      int c[n];
      cout<<"So vua nhap sau khi chuyen sang he co so "<<b<<" la: ";
      while (a != 0)
      {
         c[n] = a%b;
         n++;
         a /= b;
      }
      for (int j = n-1; j >= 0; j--)
      {
         cout<<c[j];
      }
   }
   else if (b==16)
   {
      int n;
      int c[n];
      string d;
      cout<<"So vua nhap sau khi chuyen sang he co so "<<b<<" la: ";
      while (a != 0)
      {
         c[n] = a%b;
         n++;
         a /= b;
      }
      for (int j = n-1; j >= 0; j--)
      {
         if (10 <= c[j] <= 15)
         {
            DoiSoTLP1(c[j]);
         }
         if (c[j] <= 9)
         {
            cout<<c[j];
         }
      }
   }
}

void Chuyen16Sang10 (char S[], int &a)
{
   strrev(S);
   a = 0;
   int b = strlen(S);
   for (int i = 0; i < b; i++)
   {
      if (0 <= S[i] <= 9)
      {
         a += (S[i] - '0')*pow(10,i);
      }
      switch (S[i])
      {
         case 'A':
         case 'B':
         case 'C':
         case 'D':
         case 'E':
         case 'F':
         a += (toupper(a) - 50)*pow(10,i);
      }
   }
}

int main()
{
   int n;
   cout<<"Neu muon chuyen tu he thap phan sang he khac thi nhan 1, tu thap luc phan sang he thap phan thi nhan 2: ";
   cin>>n;
   while (true)
   {
      if (n!=1 && n!=2)
      {
      cout<<"Dung nhap tao lao nhap lai di: ";
      cin>>n;
      }
      else if (n==1 || n==2)
      {
         break;
      }
   }
   //Chuyển từ hệ thập phân sang các hệ khác: 
   if (n==1)
   {
      int a, b, c;
      cout<<"Nhap so o he thap phan ban muon chuyen: ";
      cin>>a;
      cout<<"Neu muon chuyen sang nhi phan thi nhan 2, bat phan thi nhan 8, thap luc phan thi nhan 16: ";
      cin>>b;
      while (true)
      {
         if (b!=2 && b!=8 && b!=16)
         {
         cout<<"Dung nhap tao lao nhap lai di: ";
         cin>>b;
         }
         else if (b==2 || b==8 || b==16)
         {
            break;
         }
      }
      DoiHeTP(a, b);
   }
   //Chuyển từ hệ thập lục phân sang hệ thập phân:
   else if (n==2)
   {
      int b, m, c[m], d[m];
      const int max = 900;
      char p[max];
      int t;
      cout<<"Nhap gia tri he thap luc phan muon chuyen doi: ";
      cin>>p;
      cout<<"Neu muon chuyen thanh nhi phan thi nhan 2, bat phan thi nhan 8, thap phan thi nhan 10: ";
      cin>>b;
      while (true)
      {
         if (b!=2 && b!=8 && b!=10)
         {
         cout<<"Dung nhap tao lao nhap lai di: ";
         cin>>b;
         }
         else if (b==2 || b==8 || b==10)
         {
            break;
         }
      }
      Chuyen16Sang10(p,t);
      cout<<"So sau khi chuyen sang he thap phan la: "<<t<<endl;
      if (b==2 || b==8)
      {
         DoiHeTP(t, b);
      }
   }
   return 0;
}


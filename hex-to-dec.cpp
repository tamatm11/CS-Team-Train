#include<iostream>
#include<string>
#include<cmath>
#include<bitset>
using namespace std;
void hex_to_dec(string c) // handle with string
{
    long long res =0;
    for(int i=c.length()-1; i>=0;i--){
        if('A'<=c[i] && c[i]<='F'){
            res += (int(c[i])-55)*pow(16,c.length()-1-i);
        }
        else if ( '0'<=c[i] && c[i] <='9'){
            res += (int(c[i])-48)*pow(16,c.length()-i-1);    
        }
    }
    cout << res;
}
void hex_to_binary(string str){
    unsigned long long x =  stoul(str, nullptr, 16) ;
    string res = bitset<128>(x).to_string();
    cout << res;
}
void hex_to_oct(string str){

}
int main(){
    string n;
    cin >> n;
    hex_to_dec(n);
    cout << endl;
    hex_to_binary(n);
}


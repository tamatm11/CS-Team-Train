#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int a = 0;
    cout <<"Nhap so thap phan: ";
    cin >> n;
    vector<int> dec;
    while (n > 0){
        dec.push_back(n % 16);
        n /= 16;
    }
    cout <<"Chuyen so sang thap luc phan: ";
    for(int i = dec.size() - 1; i>= 0;i--){
        switch(dec[i]){
            case 10:
            cout << "A";
            break;
            case 11:
            cout << "B";
            break;
            case 12:
            cout << "C";
            break;
            case 13:
            cout << "D";
            break;
            case 14:
            cout << "E";
            break;
            case 15:
            cout << "F";
            break;
            default:
            cout << dec[i];
            

        }
    }

    
}
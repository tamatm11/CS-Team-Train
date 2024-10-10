#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dec;
    while (n > 0){
        dec.push_back(n % 2);
        n /= 2;
    }
    for (int i =dec.size() - 1; i >= 0; i--){
        cout << dec[i];
    }
    
}
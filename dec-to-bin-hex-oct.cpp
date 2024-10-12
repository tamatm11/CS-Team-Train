#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void dec_to_bin(int n, vector<int> vt){ 
	while(n!=0){
		if(n%2==0) vt.push_back(0);
		else {
			vt.push_back(1);
		}
		n/=2;
	}
	for(int i =vt.size()-1; i>=0; i--){
		cout << vt[i] << "";
   }
   cout << endl;
}
void dec_to_oct(int n, vector<int> vt){
	int arr[8];
	for(int i=0; i<8; i++){
		arr[i] = i;
	}
	while(n !=0){
		vt.push_back(arr[n%8]);
		n/=8;
	}
	for(int i=vt.size()-1; i>=n; --i){
		cout << vt[i] ;
	}
   cout << endl;
}
void dec_to_hex(int n){
	string str;
	while(n!=0){
		int tmp = n%16;
		if(tmp>9){
			char c = tmp + 55;
			str.append(1,c);
         cout << c << endl;
		}
      else {
         str += to_string(tmp);
      }
		n/=16;
	}
   reverse(str.begin(),str.end());
	cout << str;
}
// void setup(){

int main(){
	int n;
	cin >> n;
	vector<int> vt;
	// dec_to_bin(n,vt);
	// dec_to_oct(n,vt);
	dec_to_hex(n);
	// char c = 100;
	// cout << c;
}

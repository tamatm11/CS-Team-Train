#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v;
	while(n>0){
		if(n%2==0){
			v.push_back(0);
		}
		else{
			v.push_back(1);
		}
		n /=2;
	}
	for(int i= v.size()-1; i>=0; i--){
		cout << v[i]<< "";
	}
}
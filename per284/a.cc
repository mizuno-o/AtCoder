#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<string > vec(n);
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		vec[i] = s;
	}
	for(int i=0;i<n;i++){
		cout << vec[n-i-1] <<endl;
	}
	return 0;
}

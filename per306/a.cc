#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	string s;
	cin >> n >>s;
	string ans;
	for(int i=0;i<n;i++){
		ans+=s.substr(i,1);
		ans+=s.substr(i,1);
	}
	cout << ans <<endl;
}

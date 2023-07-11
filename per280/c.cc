#include<string>
#include<iostream>
using namespace std;

int main(){

	string s,t;
	cin >> s >> t;
	for(int i=0;i<t.size();i++){
		if(t[i]!=s[i]){
			cout << i+1 <<endl;
			break;
		}
	}
	return 0;
}

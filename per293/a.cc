#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

	string s;
	cin >> s;
	int size = s.size()/2;
	for(int i=0;i<size;i++){
		string change = s.substr(2*i+1,1);
		string change2 = s.substr(2*i,1);
		s.replace(2*i,1,change);
		s.replace(2*i+1,1,change2);
	}
	cout << s <<endl;
	return 0;
}

#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	string s;
	cin >> s;
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout << s <<endl;
	return 0;
}

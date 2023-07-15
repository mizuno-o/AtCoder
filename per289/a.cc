#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}else{
			s.at(i)='0';
		}
	}
	cout << s <<endl;
	return 0;
}

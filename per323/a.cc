#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;
	bool check = true;
	for(int i=0;i<s.size()/2;i++){
		if(s[i*2+1]=='0'){
			continue;
		}else{
			check = false;
		}
	}
	if(check){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}

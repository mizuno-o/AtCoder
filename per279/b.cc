#include<string>
#include<iostream>
using namespace std;

int main(){

	string s,t;
	cin >> s >> t;
	int check = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]==t[0]){
			for(int j=0;j<t.size();j++){
				if(t[j]==s[i+j]){
					check++;
				}
			}
		}
		if(check==t.size()){
			cout << "Yes" <<endl;
			break;
		}else{
			check = 0; //ex) hhhah , ha -> need initialization !
		}
	}

	if(check!=t.size()){
		cout << "No" <<endl;
	}

	return 0;
}

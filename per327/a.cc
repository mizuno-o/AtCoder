#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;
	bool check = false;
	int i=0;
	while(!check&&i<n-1){
		if((s[i]=='a'&&s[i+1]=='b')||((s[i]=='b'&&s[i+1]=='a'))){
			check = true;
			cout << "Yes" <<endl;
		}
		i++;
	}
	if(!check){
		cout << "No" <<endl;
	}
	return 0;
}

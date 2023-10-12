#include<iostream>
using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;
	int ans = -1;
	for(int i=0;i<n-2;i++){
		if(s[i]=='A'){
			string part_s = s.substr(i,3);
			//cout << part_s <<endl;
			if(part_s=="ABC"){
				ans = i+1;
				break;
			}
		}
	}
	cout << ans <<endl;
	return 0;
}

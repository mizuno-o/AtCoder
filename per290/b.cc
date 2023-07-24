#include<iostream>
#include<string>
using namespace std;

int main(){

	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s[i]=='o'){
			k-=1;
			if(k<0){
				s.replace(i,1,"x");
			}
		}
	}
	cout << s <<endl;
	return 0;
}

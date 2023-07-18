#include<string>
#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s[i]=='"'){
			for(int j=i+1;j<n;j++){
				if(s[j]=='"'){
					i=j;
					break;
				}
			}
		}else if(s[i]==','){
			s.replace(i,1,".");
		}
	}
	cout << s <<endl;
	return 0;
}

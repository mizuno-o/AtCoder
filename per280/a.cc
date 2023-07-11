#include<string>
#include<iostream>
using namespace std;

int main(){
	
	int h,w;
	cin >> h >> w;
	string s;
	int count = 0;
	for(int i=0;i<h;i++){
		cin >> s;
		for(int j=0;j<w;j++){
			if(s[j]=='#'){
				count++;
			}
		}
	}
	cout << count << endl;

	return 0;
}

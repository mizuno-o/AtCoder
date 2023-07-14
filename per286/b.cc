#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;
	for(int i=0;i<n-1;i++){
		if(s.substr(i,2)=="na"){ //string.substr(start,length)->nukidashi
			s.replace(i,2,"nya"); //string.replace(start,length,word) -> okikae
			i+=2;
		}
	}
	cout << s <<endl;
	return 0;
}

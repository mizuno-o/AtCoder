#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;
	int n2 = n;
	for(int i=0;i<n2-1;i++){
		if(s.substr(i,2)=="na"){ //string.substr(start,length)->nukidashi
			s.replace(i,2,"nya"); //string.replace(start,length,word) -> okikae
			i+=1;
			n2++;
		}
	}
	cout << s <<endl;
	return 0;
}

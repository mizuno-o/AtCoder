#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;
	int size = s.size();
	for(int i=0;i<size;i++){
		if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o'){
			s.erase(i,1);
			size = s.size();
			i--;
		}
	}
	cout << s <<endl;
	return 0;
}

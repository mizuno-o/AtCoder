#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	vector<string> v(s.size());
	int count = -1;
	for(int i=0;i<s.size();i++){
		v[i] = s.at(i);
		if(v[i]=="a"){
			count = i+1;
		}
	}
	cout << count << endl;
	return 0;
}

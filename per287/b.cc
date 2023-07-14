#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	vector<string> svec(n);
	vector<string> tvec(m);
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		svec[i] = s;
	}
	for(int j=0;j<m;j++){
		string t;
		cin >> t;
		tvec[j] = t;
	}

	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(svec[i].substr(3,3)==tvec[j]){
				count++;
				break;
			}
		}
	}
	cout << count << endl;

	return 0;
}

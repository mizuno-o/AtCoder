#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n,k;
	cin >> n >> k;
	vector<string> s(k);
	for(int i=0;i<n;i++){
		string si;
		cin >> si;
		if(i<k){
			s[i] = si;
		}
	}
	sort(s.begin(),s.end());
	for(int j=0;j<k;j++){
		cout << s[j] <<endl;
	}
	return 0;
}


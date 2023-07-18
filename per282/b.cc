#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		string si;
		cin >> si;
		s[i] = si;
	}
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int local_count = 0;
			for(int k=0;k<m;k++){
				if(s[i][k]=='o'||s[j][k]=='o'){
					local_count++;
				}
			}
			if(local_count==m){
				count++;
				//cout << s[i] << " " << s[j] <<endl;
			}
		}
	}
	cout << count <<endl;

	return 0;
}


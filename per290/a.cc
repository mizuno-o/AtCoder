#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		vec[i] = a;
	}
	int count = 0;
	for(int j=0;j<m;j++){
		int b;
		cin >> b;
		count += vec[b-1];
	}
	cout << count << endl;
	return 0;
}

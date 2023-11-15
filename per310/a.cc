#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int n,p,q;
	cin >> n >> p >> q;
	vector<int> val(n+1);
	for(int i=0;i<n;i++){
		int d;
		cin >> d;
		val[i] = d+q;
	}
	val[n]=p;
	sort(val.begin(),val.end());
	cout << val[0] <<endl;
	return 0;
}

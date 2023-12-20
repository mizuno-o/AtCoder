#include<iostream>
using namespace std;

int main(){

	int n,a,b;
	cin >> n >> a >> b;
	int ans = 0;
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		if(c==a+b){
			ans = i;
		}
	}
	cout << ans+1 <<endl;
	return 0;
}

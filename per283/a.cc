#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int a,b;
	cin >> a >> b;
	int ans = a;
	//cout << (double)pow(a,b) <<endl;
	for(int i=0;i<b-1;i++){
		ans *=a;
	}
	cout << ans <<endl;
	return 0;
}

#include<iostream>
using namespace std;

int main(){

	int n,m,p;
	cin >> n >> m >> p;
	int a = 0;
	int count = 0;
	for(int i=1;i<=n;i++){
		if(i==m+a*p){
			count++;
			a++;
		}
	}
	cout << count << endl;
	return 0;
}

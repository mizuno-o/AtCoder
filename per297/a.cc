#include<iostream>
using namespace  std;

int main(){

	int n,d;
	cin >> n >> d;
	int t1 = 0;
	bool check = false;
	cin >> t1;
	for(int i=1;i<n;i++){
		int ti;
		cin >> ti;
		if(ti-t1<=d){
			cout << ti <<endl;
			check = true;
			break;
		}
		t1 = ti;
	}
	if(!check){
		cout << -1 <<endl;
	}
	return 0;
}



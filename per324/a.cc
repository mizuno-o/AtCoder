#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	bool check = true;
	int base;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(i==0){
			base = a;
		}else{
			if(a!=base){
				check = false;
			}
		}
	}

	if(check){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}


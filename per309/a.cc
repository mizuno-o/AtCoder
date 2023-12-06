#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	bool check = false;
	if(a%3==1){
		if(b==a+1){
			check = true;
		}
	}else if(a%3==2){
		if(b==a+1){
			check = true;
		}
	}

	if(check){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}



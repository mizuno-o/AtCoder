#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long n;
	cin >> n;
	int x,y = 0;
	bool check1 = true;
	bool check2 = true;
	long value = 1;
	while(check1){
		value*=2;
		x++;
		if(value>10E17){
			check1 = false;
		}
	}
	value = 1;
	while(check2){
		value*=3;
		y++;
		if(value>10E17){
			check2 = false;
		}
	}
	long n_val = 1;
	bool ans = false;
	for(int i=0;i<x+1;i++){
		for(int j=0;j<y+1;j++){
			if((n_val==n)&&!ans){
				cout << "Yes" <<endl;
				ans = true;
				break;
			}
			n_val*=3;
		}
		if((n_val==n)&&!ans){
			cout << "Yes" <<endl;
			ans = true;
			break;
		}
		n_val = 1;
		for(int k=0;k<i;k++){
			n_val*=2;
		}
	}
	if((n_val!=n)&&!ans){
		cout << "No" <<endl;
	}
	return 0;
}

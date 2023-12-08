#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int count = 1;
	int sum = 0;
	for(int i=0;i<7*n;i++){
		int a;
		cin >> a;
		sum += a;
		if(count == 7){
			cout << sum <<" ";
			count = 0;
			sum = 0;
		}
		count++;
	}
	if(count!=1){
		cout << sum <<endl;
	}else{
		cout <<endl;
	}
	return 0;
}

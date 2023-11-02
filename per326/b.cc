#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	bool check = false; 
	while(!check){
		int hun_num = n/100;
		int ten_num = (n-100*hun_num)/10;
		int one_num = n-100*hun_num-10*ten_num;
		if(hun_num*ten_num==one_num){
			check = true;
			cout << n <<endl;
		}else{
			n+=1;
		}
	}
	return 0;
}

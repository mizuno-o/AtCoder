#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int amari = n%5;
	if(amari<3){//0,1,2
		cout << (n/5) * 5 <<endl;
	}else{//3,4
		cout << ((n/5) * 5) + 5<<endl;
	}
	return 0;
}

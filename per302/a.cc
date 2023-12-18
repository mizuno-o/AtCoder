#include<iostream>
using namespace std;

int main(){

	long a,b;
	bool check = true;
	int count = 0;
	cin >> a >> b;

	long c = a/b;
	if(a%b!=0){
		c+=1;
	}
	cout << c <<endl;
	return 0;
}

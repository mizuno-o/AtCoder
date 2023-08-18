#include<iostream>
using namespace std;

int main(){

	int a,b;
	cin >> a >> b;
	int three1 = a/4;
	int two1 = (a-three1*4)/2;
	int one1 = a-three1*4-two1*2;
	int three2 = b/4;
	int two2 = (b-three2*4)/2;
	int one2 = b-three2*4-two2*2;
	int one = 0;
	int two = 0;
	int three = 0;

	if((three1==1)||(three2==1)){
		three=1;
	}
	if((two1==1)||(two2==1)){
		two=1;
	}
	if((one1==1)||(one2==1)){
		one=1;
	}
	cout << three*4+two*2+one <<endl;
	return 0;
}

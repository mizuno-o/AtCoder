#include<iostream>
#include<string>
using namespace std;

string change(int num){
	string s;
	if(num==10){
		s="A";
	}else if(num==11){
		s="B";
	}else if(num==12){
		s="C";
	}else if(num==13){
		s="D";
	}else if(num==14){
		s="E";
	}else if(num==15){
		s="F";
	}
	return s;
}


int main(){

	int n;
	cin >> n;
	int one = n/16;
	int two = n-16*one;
	//cout << one << " " << two <<endl;
	string one_2;
	string two_2;
	if(one>9){
		one_2 = change(one);
		cout << one_2;
	}else{
		cout << one;
	}
	if(two>9){
		two_2 = change(two);
		cout << two_2;
	}else{
		cout << two;
	}

	cout << endl;
	return 0;
}

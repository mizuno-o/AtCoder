#include<iostream>
#include<string>
using namespace std;

int check(int count,string s){
	if(s=="and"){
		count++;
	}else if(s=="not"){
		count++;
	}else if(s=="that"){
		count++;
	}else if(s=="the"){
		count++;
	}else if(s=="you"){
		count++;
	}
	return count;
}

int main(){

	int n;
	cin >> n;
	int count = 0;
	int ans = 0;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		ans = check(ans,s);
	}
	if(ans!=0){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}

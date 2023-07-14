#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	cin >> n;
	int for_num = 0;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(s=="For"){
			for_num++;
		}
	}
	if(for_num>n/2){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}


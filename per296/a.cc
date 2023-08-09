#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	bool check = true;
	for(int i=0;i<n-1;i++){
		if(s.substr(i,1)=="M"){
			if(s.substr(i+1,1)!="F"){
				check=false;
			}
		}else{
			if(s.substr(i+1,1)!="M"){
				check=false;
			}
		}
	}
	if(!check){
		cout << "No" <<endl;
	}else{
		cout << "Yes" <<endl;
	}
	return 0;
}



#include<iostream>
#include<string>
using namespace  std;

int main(){
	int n;
	string s,t;
	cin >> n >> s >> t;
	int true_count = 0;
	for(int i=0;i<n;i++){
		 if(s.substr(i,1)==t.substr(i,1)||(s.substr(i,1)=="1"&&t.substr(i,1)=="l")||(s.substr(i,1)=="l"&&t.substr(i,1)=="1")||(s.substr(i,1)=="0"&&t.substr(i,1)=="o")||(s.substr(i,1)=="o"&&t.substr(i,1)=="0")){
			 true_count++;
		 }
	}
	if(true_count==n){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}


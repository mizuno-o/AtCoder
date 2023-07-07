#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check_0(string s){
	bool ans = false;
	if(s[0]=='H'){
		ans=true;
	}else if(s[0]=='D'){
		ans=true;
	}else if(s[0]=='C'){
		ans=true;
	}else if(s[0]=='S'){
		ans=true;
	}
	return ans;
}

bool check_1(string s){
	bool ans = false;
	if(s[1]=='A'){
		ans=true;
	}else if(s[1]=='2'){
		ans=true;
	}else if(s[1]=='3'){
		ans=true;
	}else if(s[1]=='4'){
		ans=true;
	}else if(s[1]=='5'){
		ans=true;
	}else if(s[1]=='6'){
		ans=true;
	}else if(s[1]=='7'){
		ans=true;
	}else if(s[1]=='8'){
		ans=true;
	}else if(s[1]=='9'){
		ans=true;
	}else if(s[1]=='T'){
		ans=true;
	}else if(s[1]=='J'){
		ans=true;
	}else if(s[1]=='Q'){
		ans=true;
	}else if(s[1]=='K'){
		ans=true;
	}
	return ans;
}


int main(){

	int n;
	cin >> n;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		string sin;
		cin >> sin;
		s[i] = sin;
	}
	sort(s.begin(),s.end());
	bool check = true;
	for(int i=0;i<n;i++){
		if(!check_0(s[i])){
			check=false;
		}
		if(!check_1(s[i])){
			check=false;
		}
		if(i!=0){
			if(s[i-1]==s[i]){
				check=false;
			}
		}
	}
	if(check){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}

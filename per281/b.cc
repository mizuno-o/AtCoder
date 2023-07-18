#include<iostream>
#include<string>
using namespace std;

int capital(string s){
	if((s>="A")&&(s<="Z")){
		return 1;
	}else{
		return 2;
	}
}

int main(){

	string s;
	cin >> s;
	bool check = false;
	int true_count = 0;

	if(s.size()==8){
		string s1 = s.substr(0,1);
		string s2 = s.substr(1,6);
		int s2_int = stoi(s2);
		string s3 = s.substr(7,1);
		if(capital(s1)==1){
			true_count++;
		}
		if((s2_int>=100000)&&(s2_int<=999999)){
			true_count++;
		}
		if(capital(s3)==1){
			true_count++;
		}
	}

	if(true_count==3){
		check = true;
	}

	if(check==true){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}

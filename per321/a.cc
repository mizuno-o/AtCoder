#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	string s = to_string(n);
	bool check = true;
	for(int i=0;i<s.size()-1;i++){
		if(s[i+1]>=s[i]){
			cout << "No" <<endl;
			check = false;
			break;
		}
	}
	if(check == true){
		cout << "Yes" <<endl;
	}
	return 0;
}


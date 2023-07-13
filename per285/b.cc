#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=1;i<n;i++){
		int l = n-i;
		for(int j=0;j<n-i;j++){
			if(s[j] == s[j+i]){
				//cout << s[j] << " == " << s[j+i] << ", l=" << j <<endl;
				l = j;
				break;
			//}else{
			//	l = j+1;
			}
		}
		cout << l <<endl;
	}
	return 0;
}

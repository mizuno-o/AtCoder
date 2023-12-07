#include<iostream>
using namespace std;

int main(){
	bool check = false;
	int tmp;
	for(int i=0;i<8;i++){
		int s;
		cin >> s;
		if(s%25==0&&s>=100&&s<=675){
			if(i!=0){
				if(s>=tmp){
					check = true;
				}else{
					check = false;
					break;
				}
			}
		}else{
			check = false;
			break;
		}
		tmp = s;
	}
	if(check){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n >> s;
	int half;
	bool takahashi = false;
	if(n%2==0){
		half = n/2;
	}else{
		half = n/2 + 1;
	}
	int count_t = 0;
	int count_a = 0;
	for(int i=0;i<n;i++){
		if(s.substr(i,1)=="T"){
			count_t++;
		}else{
			count_a++;
		}
		if(count_a>=half){
			break;
		}
		if(count_t>=half){
			takahashi = true;
			break;
		}
	}
	if(takahashi){
		cout << "T" <<endl;
	}else{
		cout << "A" <<endl;
	}
	return 0;
}

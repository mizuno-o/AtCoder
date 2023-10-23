#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int score;
	cin >> score;
	int vs = 0;
	for(int i=0;i<n-2;i++){
		int tmp;
		cin >> tmp;
		if(tmp >= vs){
			vs = tmp;
		}
	}
	if(score>vs){
		cout << 0 <<endl;
	}else{
		cout << vs-score+1 <<endl;
	}
	return 0;
}

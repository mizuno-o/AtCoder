#include<iostream>
using namespace std;

int main(){

	int n,x;
	cin >> n >> x;
	int score = 0;
	for(int i=0;i<n;i++){
		int s;
		cin >> s;
		if(s<=x){
			score+=s;
		}
	}
	cout << score << endl;
	return 0;
}

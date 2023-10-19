#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n,h,x;
	cin >> n >> h >> x;
	vector<int> p(n);
	for(int i=0;i<n;i++){
		int p_value;
		cin >> p_value;
		p[i] = p_value;
	}

	int h_up = 0;
	for(int i=0;i<n+1;i++){
		if(h_up>=x){
			cout << i <<endl;
			break;
		}
		h_up = h+p[i];
	}
	return 0;
}


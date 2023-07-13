#include<iostream>
#include<vector>
using namespace std;


int main(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		int ai;
		cin >> ai;
		a[i] = ai;
	}
	int q;
	cin >> q;
	for(int j=0;j<q;j++){
		int num;
		cin >> num;
		if(num==1){
			int k,x;
			cin >> k >> x;
			a[k-1]=x;
		}else{
			int k;
			cin >> k;
			cout << a[k-1] <<endl;
		}
	}

	return 0;
}

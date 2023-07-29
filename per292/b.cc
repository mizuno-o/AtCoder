#include<iostream>
#include<map>
using namespace std;

int main(){

	int n,q;
	cin >> n >> q;
	map<int,int> mp;
	for(int i=0;i<q;i++){
		int c,x;
		cin >> c >> x;
		if(c==1){
			mp[x] += 1;
		}else if(c==2){
			mp[x] = 2;
		}else{
			if(mp[x]<2){
				cout << "No" <<endl;
			}else{
				cout << "Yes" <<endl;
			}
		}
	}
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n,p,q,r,s;
	cin >> n >> p >> q >> r >> s;
	vector<int> vec(n);
	vector<int> change(q-p+1);
	vector<int> change_2(s-r+1);
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		vec[i]=a;
		if((i>=p-1)&&(i<=q-1)){
			change[i-p+1]=a;
		}
		if((i>=r-1)&&(i<=s-1)){
			change_2[i-r+1]=a;
		}
	}
	for(int i=0;i<n;i++){
		if((i>=p-1)&&(i<=q-1)){
			cout << change_2[i-p+1];
		}else if((i>=r-1)&&(i<=s-1)){
			cout << change[i-r+1];
		}else{
			cout << vec[i];
		}
		if(i!=n-1){
			cout << " ";
		}else{
			cout <<endl;
		}
	}
	return 0;
}

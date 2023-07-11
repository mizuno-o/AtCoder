#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n;
	cin >> n;
	int ans = 0;
	int save = 0;
	for(int i=0;i<n;i++){
		int s;
		cin >> s;
		ans = s-save;
		save = s;
		if(i!=n-1){
			cout << ans << " ";
		}else{
			cout << ans <<endl;
		}
	}

	return 0;
}

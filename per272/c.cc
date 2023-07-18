#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> odd;//odd or even
	vector<int> even;//odd or even
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a%2==0){
			even.push_back(a);
		}else{
			odd.push_back(a);
		}
	}
	int e_s = even.size();
	int o_s = odd.size();
	//cout << e_s << " " << o_s <<endl;
	int even_sum = -1;
	int odd_sum = -1;
	//cout << "OK" <<endl;
	if(e_s>1){
		sort(even.begin(),even.end());//10,10,8,6,...
		even_sum = even.at(e_s-1)+even.at(e_s-2);
	}
	if(o_s>1){
		sort(odd.begin(),odd.end());
			odd_sum = odd.at(o_s-1)+odd.at(o_s-2);
	}
	if(odd_sum>=even_sum){
		cout << odd_sum <<endl;
	}else{
		cout << even_sum <<endl;
	}

	return 0;
}



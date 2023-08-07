#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> vec;
	for(int i=0;i<n;i++){
		int ai;
		cin >> ai;
		if(ai%2==0){
			vec.push_back(ai);
		}
	}
	for(int i=0;i<vec.size();i++){
		if(i!=vec.size()-1){
			cout << vec[i] << " ";
		}else{
			cout << vec[i] <<endl;
		}
	}
	return 0;
}

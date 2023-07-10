#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

	int n,k;
	cin >> n >> k;
	vector<int > vec;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	for(int j=0;j<k;j++){
		vec.push_back(0);
	}
	for(int l=vec.size()-n;l<vec.size();l++){
		if(l!=vec.size()-1){
			cout << vec[l] << " ";
		}else{
			cout << vec[l] <<endl;
		}
	}
	return 0;
}

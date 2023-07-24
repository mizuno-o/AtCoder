#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> x(n*5);
	int sum = 0;
	for(int i=0;i<n*5;i++){
		int xi;
		cin >> xi;
		x[i] = xi;
		sum += xi;
	}
	sort(x.begin(),x.end());
	for(int i=0;i<n;i++){
		int max = x[n*5-i-1];
		int min = x[i];
		sum -= max;
		sum -= min;
	}
	cout << (float)sum/(3*n) <<endl;
	return 0;
}
	



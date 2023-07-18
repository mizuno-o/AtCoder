#include<iostream>
#include<vector>
using namespace std;

int main(){

	int n;
	long t;
	cin >> n >> t;
	vector<int> a(n);
	long def_sum = -t;
	bool check = false;
	//100 30 50 30 -> -100start -80,10->i=2,a[i] - def_sum = ans
	for(int i=0;i<n;i++){
		int ai;
		cin >> ai;
		a[i] = ai;
		def_sum += (long)ai;
		//cout << ai << " " << def_sum << endl;
		if(def_sum>=0){
			//cout << (long)def_sum <<endl;
			//cout << i+1 << " " << (int)(a[i] - (def_sum - t)) <<endl;
			cout << i+1 << " " << (int)(a[i] - def_sum) <<endl;
			check = true;
			break;
		}
	}
	if(!check){
		long sum_time = (def_sum+t)*(t/(def_sum+t));
		//cout << sum_time <<endl;
		for(int i=0;i<n;i++){
			sum_time += a[i];
			if(sum_time>=t){
				cout << i+1 << " " << (int)(a[i] - (sum_time - t)) <<endl;
				break;
			}
			if(i==n-1){
				i=-1;
			}
		}
	}
	return 0;
}

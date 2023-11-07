#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> score(n);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		int win = 0;	
		int loss = 0;	
		for(int j=0;j<s.size();j++){
			if(s[j]=='o'){
				win++;
			}else if(s[j]=='x'){
				loss++;
			}
		}
		score[i]=win-loss;
		mp[i]=win-loss;
	}
	sort(score.begin(),score.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout << "i:" << i << " j:" << j << " score[n-i-1]:" << score[n-i-1] << " mp[j]:" << mp[j] <<endl;
			if(score[n-i-1]==mp[j]){
				//cout << "ans = " << j+1 << " ";
				cout << j+1 << " ";
				//mp.erase(j);	
				mp[j]=200;
				//cout << ":test start" <<endl;
				for(int k=0;k<mp.size();k++){
					//cout << "j=" << j << "\tk=" << k << "\tmp[k]=" << mp[k] <<endl;
				}
				//cout << ":test end" <<endl;
				break;
			}
		}
	}
	cout <<endl;
	return 0;
}

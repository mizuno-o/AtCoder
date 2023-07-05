#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//my code
	/*
	int n,m;
	cin >> n >> m;
	vector< vector<int>> v(2,vector<int>(m));
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		v[0][i] = a;
		v[1][i] = b;
	}
	for(int j=1;j<n+1;j++){
		int count = 0;
		//cout << "now j:" << j <<endl;
		vector<int> ans_j;
		for(int i=0;i<m;i++){
			if(v[0][i]==j){
				ans_j.push_back(v[1][i]);
				//cout << "v[1][i]=" << v[1][i] <<endl;
			}else if(v[1][i]==j){
				ans_j.push_back(v[0][i]);
				//cout << "v[0][i]=" << v[0][i] <<endl;
			}
		}
		cout << ans_j.size();
		if(ans_j.size()!=0){
			sort(ans_j.begin(),ans_j.end());
			for(int k=0;k<ans_j.size();k++){
				cout << " " << ans_j.at(k);
			}
		}
		cout << endl;
	}
	*/

	//after reading ans
	int n,m;
	cin >> n >> m;
	vector<vector<int> > v(n);//v[i]=i+1番目の都市からつながっている都市
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		v[a-1].push_back(b);//a番目の都市からつながっている都市にbが追加された
		v[b-1].push_back(a);
	}
	for(int i=0;i<n;i++){
		cout << v[i].size();
		if(v[i].size()!=0){
			sort(v[i].begin(),v[i].end());
			for(int j=0;j<v[i].size();j++){
				cout << " " << v[i][j];
			}
		}
		cout << endl;
	}


	return 0;
}

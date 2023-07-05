#include <iostream>
#include <vector>
using namespace std;

int main(){
	int h,w;
	cin >> h >> w;
	vector< vector<string>> v(h,vector<string>(w)); 
	vector<int > ans(w);
	for(int i=0;i<h;i++){
		string s;
		cin >> s;
		for(int j=0;j<w;j++){
			v[i][j]=s.at(j);
		}
	}
	for(int j=0;j<w;j++){
		int count = 0;
		for(int i=0;i<h;i++){
			if(v[i][j]=="#"){
				count++;
			}
		}
		ans[j]=count;
	}

	for(int j=0;j<w-1;j++){
		cout << ans[j] << " ";
	}
	cout << ans[w-1] <<endl;
	return 0;
}

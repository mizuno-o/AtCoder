#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int ans(string s,string a,string b, string c){
	bool check = false;
	if(s.substr(0,1)==a){
		for(int i=1;i<s.size();i++){
			if(s.substr(i,1)==b){
				for(int j=i;j<s.size();j++){
					if(s.substr(j,1)==c){
						check = true;
						return j;
						break;
					}
				}
			}
		}
	}
	if(!check){
		return s.size()+1;
	}
}

int main(){
	int n;
	string s;
	cin >> n >> s;
	vector<int> j(6);
	j[0] = ans(s,"A","B","C");
	j[1] = ans(s,"A","C","B");
	j[2] = ans(s,"B","A","C");
	j[3] = ans(s,"B","C","A");
	j[4] = ans(s,"C","A","B");
	j[5] = ans(s,"C","B","A");
	sort(j.begin(),j.end());
	cout << j[0]+1 <<endl;
	return 0;
}

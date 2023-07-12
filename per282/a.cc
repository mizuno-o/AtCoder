#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int k;
	cin >> k;
	vector<string> ans(26);
	ans[0]='A';
	ans[1]='B';
	ans[2]='C';
	ans[3]='D';
	ans[4]='E';
	ans[5]='F';
	ans[6]='G';
	ans[7]='H';
	ans[8]='I';
	ans[9]='J';
	ans[10]='K';
	ans[11]='L';
	ans[12]='M';
	ans[13]='N';
	ans[14]='O';
	ans[15]='P';
	ans[16]='Q';
	ans[17]='R';
	ans[18]='S';
	ans[19]='T';
	ans[20]='U';
	ans[21]='V';
	ans[22]='W';
	ans[23]='X';
	ans[24]='Y';
	ans[25]='Z';
	for(int i=0;i<k;i++){
		cout << ans[i];
	}
	cout << endl;
	return 0;
}


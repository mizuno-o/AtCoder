#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){

	int digit;
	cin >> digit;
	vector<string> PI(10);
	string pi = "3.";
	PI[0] = "1415926535";
	PI[1] = "8979323846";
	PI[2] = "2643383279";
	PI[3] = "5028841971";
	PI[4] = "6939937510";
	PI[5] = "5820974944";
	PI[6] = "5923078164";
	PI[7] = "0628620899";
	PI[8] = "8628034825";
	PI[9] = "3421170679";
	int num_digit = digit/10;
	cout << pi;
	for(int i=0;i<=num_digit-1;i++){
		cout << PI[i];
	}
	int nokori = digit%10;
	if(nokori != 0){
		cout << PI[num_digit].substr(0,nokori) <<endl;
	}else{
		cout <<endl;
	}

	return 0;
}

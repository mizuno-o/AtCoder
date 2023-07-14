#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;
	int count = 0;
	for(int i=0;i<s.size();i++){
		if(s.at(i)!='0'){
			count++;
			//cout << "not0" <<endl;
		}else{
			if(i!=s.size()-1){
				if(s.at(i+1)=='0'){
					count++;
					i++;
					//cout << "00" <<endl;
				}else{
					count++;
				}
			}else{
				count++;
				//cout << "0" <<endl;
			}
		}
	}
	cout << count << endl;
	return 0;
}


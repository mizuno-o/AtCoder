#include<iostream>
#include<string>
using namespace std;

int name2rate(string s){
	int rate = 0;
	if(s=="tourist"){
		rate = 3858;
	}else if(s=="ksun48"){
	    rate = 3679;
	}else if(s=="Benq"){
		rate = 3658;
	}else if(s=="Um_nik"){
		rate = 3648;
	}else if(s=="apiad"){
		rate = 3638;
	}else if(s=="Stonefeang"){
		rate = 3630;
	}else if(s=="ecnerwala"){
		rate = 3613;
	}else if(s=="mnbvmar"){
		rate = 3555;
	}else if(s=="newbiedmy"){
		rate = 3516;
	}else if(s=="semiexp"){
		rate = 3481;
	}
	return rate;
}


int main(){

	string s;
	cin >> s;
	int ans = name2rate(s);
	cout << ans <<endl;
	return 0;
}

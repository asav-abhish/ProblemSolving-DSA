// https://hack.codingblocks.com/app/contests/4001/1381/problem

#include<iostream>
using namespace std;
void convertpi(char s[1001],int i, char out[1001], int j){
	if( s[i] == '\0'){
		out[j] = '\0';
		cout << out<<endl;
		return;
	}
	//rec case
	if(s[i] == 'p'){
		if(s[i+1] == 'i'){
			//out[j] = "3.14";
			out[j] = '3';
			out[j+1] = '.';
			out[j+2] = '1';
			out[j+3] = '4';
			
			convertpi(s,i+2,out,j+4);
		}
		else{
			out[j] = 'p';
			convertpi(s,i+1,out,j+1);
		}
	}
	else{
		out[j] = s[i];
	//	cout << out[j] << endl;
		convertpi(s,i+1,out,j+1);
	}
}
int main() {
	int t;
	cin >> t;
		while(t--){
		char s[1001];
		cin >> s;
		char out[1001];
		convertpi(s,0,out,0);
		}

	return 0;
}

// https://hack.codingblocks.com/app/contests/4001/1060/problem

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n = s.length();
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){

			int len = i+j;
			if(len % 2 == 0){
				int srt = i;
				int end = len ;
				bool b = false;
				while(srt < end){
					if(s[srt++] == s[end--]){
						b = true;
					}
					else{
						b = false;
						break;
					}
				}
				if(b == true){
					count++;
				}
			}

			else{
				int srt = i;
				int end = len;
				bool b = false;
				while(srt < end){
					if(s[srt++] == s[end--]){
						b = true;
					}
					else{
						b = false;
						break;
					}
				}
				if(b == true){
					count++;
				}
			}
		}	
	}
	cout << count + n <<endl;
	return 0;
}

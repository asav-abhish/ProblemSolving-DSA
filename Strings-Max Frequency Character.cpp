// https://hack.codingblocks.com/app/contests/4001/558/problem

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int a[26] = {0};
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		a[s[i] - 'a']++;
	}
	int mx = 0;
	char ch;
	for(int i=0;i<26;i++){
		if(a[i]  > mx){
			mx = a[i];
			ch = (i + 'a');
		}
	}
	cout<<ch<<endl;
	return 0;
}

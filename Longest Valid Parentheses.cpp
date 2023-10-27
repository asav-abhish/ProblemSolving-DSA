//  https://hack.codingblocks.com/app/contests/4001/1357/problem

#include<iostream>
#include<stack>
#include<string>
using namespace std;
void checkbalanceornot (string s){
	stack <char> b;
    int cnt=0;
	for( int i=0; i< s.length(); i++ ){
		char ch = s[i];
		if(ch == '(' ){
			b.push(ch);
		}
		else {
            if(!b.empty() ){
				b.pop();
                cnt+=2;
			}
        }
	}
	cout<<cnt;
}
int main() {
	string s;
	getline(cin,s);

	checkbalanceornot(s) ;
		
	return 0;
}

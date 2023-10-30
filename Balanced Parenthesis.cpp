// https://hack.codingblocks.com/app/contests/4001/709/problem

#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkbalanceornot (string s){
	stack <char> b;

	for( int i=0; i< s.length(); i++ ){
		char ch = s[i];
		if(ch == '(' || ch=='{' || ch=='['){
			b.push(ch);

		}
		if(ch == ')') {
            if(!b.empty() && b.top() == '('){
				b.pop();
			}
            else{
                return false;
            }
        }
		
		if(ch == '}'){
            if(!b.empty() && b.top() == '{'){
				b.pop();
			}
			else{
				return false;
			}
        }

		if(ch == ']'){
            if(!b.empty() && b.top() == '['){
				b.pop();
			}
			else{
				return false;
			}
        }
	}
	if(b.empty()){
		return true;
	}
	return false;
	
}
int main() {
	string s;
	getline(cin,s);

	if(checkbalanceornot(s) == true){
		cout << "Yes";
	}
	else{
		cout <<"No";
	}
	return 0;
}

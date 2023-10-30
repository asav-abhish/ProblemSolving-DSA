// https://hack.codingblocks.com/app/contests/4001/708/problem

#include<iostream>
#include<stack>
using namespace std;
int main () {
	stack<int> s;
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		int a;
		cin >> a ;
		if(a==1 && s.empty()){
			cout<<"No Code"<<endl;
		}
		else if(a==1 && !s.empty()){
			cout << s.top()<<endl;
			s.pop();
		}
		if(a!=1){
			int b;
			cin >> b;
			s.push(b);
		}
		
	}
	return 0;
}

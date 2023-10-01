// https://hack.codingblocks.com/app/contests/4001/468/problem

#include <iostream>
#include<string>

using namespace std;
int main() {
    string s;
    getline(cin, s);         //aaabbccds
  
    int m = 1;

    for(int i = 0; i < s.length(); i++){  //s.length()
        
        if( s[i] == s[i+1] ){
            m++;
            continue;
        }
        cout<< s[i];
		if (m > 1){
			cout << m ;
		}
        
        m = 1;

    }
    return 0;
}

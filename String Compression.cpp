// https://hack.codingblocks.com/app/contests/4001/380/problem

#include <iostream>
#include<string>

using namespace std;
int main() {
    string s;
    getline(cin, s);         //aaabbccds
  
    int m = 1;

    for(int i = 0; i < s.length(); i++){  //s.length()
        
        if( s[i] == s[i+1] ){
           //cout << s[i] <<" "<< s[i+1] << endl; 
            m++;
            continue;
        }
        cout<< s[i] ;
        cout << m ;
        m = 1;

    }
    return 0;
}

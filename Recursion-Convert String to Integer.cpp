// https://hack.codingblocks.com/app/contests/4001/1373/problem

#include<iostream>
using namespace  std;
int stoint (string s, int l){
    // base case
if(l == 0){ //null string h toh 0 integer me
    return 0;
}
//rec case
 
    return stoint(s,l-1) * 10 + s[l-1] - '0';
    
   // return stringtoint(s,l-1)*10+(s[l-1]-'0');

  
}
int main(){
    string s;
    getline(cin, s);
    int l = s.length();

    cout << stoint(s,l) ;
}

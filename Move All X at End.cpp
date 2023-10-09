// https://hack.codingblocks.com/app/contests/4001/1061/problem

#include<iostream>
using namespace std;
string allxatend(string s){
    //base case
    if(s.length() == 0){
        return "";
    }
    //rec case
    char ch = s[0];
    if (ch == 'x'){
        return allxatend( s.substr(1)) + ch;
    }
    else{
       return  ch + allxatend( s.substr(1));
    }
}
int main(){
    string s;
    cin >> s;
    cout << allxatend(s);
}

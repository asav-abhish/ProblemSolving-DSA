// https://hack.codingblocks.com/app/contests/4001/1259/problem

#include<iostream>
using namespace std;
int count;
void towerofhanoi(int n, string src, string des, string hel){
    //base case
    if(n == 0){
        return;
    }
    //rec case
    towerofhanoi(n-1,src,hel,des);
    
    cout <<"Move " << n << "th disc from " << src << " to " << des << endl;
    count++;
    towerofhanoi(n-1,hel,des,src);
}
int main(){
    int n;
    cin >> n;
    
    towerofhanoi(n,"T1","T2","T3");
    cout << count << endl;
}

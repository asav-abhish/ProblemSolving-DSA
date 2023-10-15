// https://hack.codingblocks.com/app/contests/4001/234/problem

#include<iostream>
using namespace std;
int co = 0;
void mazepath(string s, int sr, int er, int sc, int ec){
    if(sr == er && sc == ec){
        cout << s << " ";
		co++;
        return ;
    }

    if(sr > er || sc > ec){
        return  ;
    }

//return a+b;
    mazepath(s + 'V',sr+1,er,sc,ec);
     mazepath(s + 'H' ,sr,er,sc+1,ec);   //3 //3 for n==3';
     mazepath(s + 'D' ,sr+1,er,sc+1,ec); 

}
int main(){
    int n;
    cin >> n; 
	int m;
	cin >> m;
    string s ="";

     mazepath(s,0,n-1,0,m-1);
	 cout << endl << co;
}

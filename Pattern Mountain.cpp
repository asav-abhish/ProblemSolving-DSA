// https://hack.codingblocks.com/app/contests/4001/571/problem

n = 4;
                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1  

#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int st=1;
	int sp=2*N-3;
    
	for(int i=1;i<=N;i++){
        int val=1;
        
		for (int j=1;j<=st;j++){
			cout<<val<<"	";
            val++;
		}
        for(int j=1; j<=sp; j++){
            cout<<" 	";
        }
        val--;
        for(int j=1; j<=st; j++){
             if(i==N and j==1){
				val--;	 
			   continue;
            
            }
            cout<<val<<"	";
            val--;
        }
        
        st+=1;
        sp-=2;
       cout<<endl;
    } 
    return 0;
}

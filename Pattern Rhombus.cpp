// https://hack.codingblocks.com/app/contests/4001/397/problem

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1

  #include <iostream>
using namespace std;
int main(){
	int n,st,sp;
	cin>>n;
	st=1;
	sp=n-1;
    int val=1;
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=sp;j++){
			cout<<" 	";
		}
        int cval=val;
		for(int j=1;j<=st;j++){
			cout<<cval<<"	";
            if(j<=st/2){
            cval+=1;
            }
            else{
                cval--;
            }
		}
        
        if(i<n){
            st+=2;
            sp-=1;
            val+=1;
            
        }
        else{
            st-=2;
            sp+=1;
            val-=1;
        }
        cout<<endl;
	}
}

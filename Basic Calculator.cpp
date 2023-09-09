// https://hack.codingblocks.com/app/contests/4001/461/problem

#include<iostream>
using namespace std;
int main() {
	char ch; 
    cin >> ch;

while(ch){
    if(ch== 'X' || ch== 'x' ){
        return 0;
    }
	else if(ch=='+'||ch=='-'||ch=='/'||ch=='%'||ch=='*'){
            long long int n1, n2, ans;
                  cin >> n1 ;
                  cin >> n2 ;

                    if(ch=='+'){
                        ans = n1 + n2;
                        cout << ans << endl;
                    }
                    else if(ch=='-'){
                        ans = n1 - n2;
                        cout << ans << endl;
                    }
                    else if(ch=='*'){
                        ans = n1 * n2;
                        cout << ans << endl;
                    }
                    else if(ch=='/'){
                        ans = n1 / n2;
                        cout << ans << endl;
                    }
                    else{
                        ans = n1 % n2;
                        cout << ans << endl;
                    }
    }
    else{
	    cout << "Invalid operation. Try again." <<endl;
    }
                            cin >> ch;  
}
    return 0; 
}





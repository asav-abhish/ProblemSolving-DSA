// https://hack.codingblocks.com/app/contests/4001/399/problem

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, sb, db;
	 cin  >> sb >> db ;
	 cin >> n;
    int ld,ld1;
	

if(sb == 10){
	int power=1;
    int  ans = 0;
    while(n > 0){
        int ld = n % db;
        n /= db;
        ans = ans + power * ld;
		power *= 10;
    }
	cout << ans;
}
else{
	
	int count = 0, ans = 0;
	while(n != 0){
		count ++;
		ld = n % 10;
		n = n / 10;
		ans = ans + ld * pow(sb, (count - 1));
	}
	//decimal ho chuka hoga 
//	cout << ans;
	// ab jiss base me chaiye wo kar rhe

	 long long int  answ = 0;
    while(ans > 0){
        int ld = ans % db;
        ans /= db;
        answ = answ * 10 + ld;
    }
	// reverse
	int ld,sum=0;
int reverse=0;
while(answ>0){
	ld = answ%10;

reverse=reverse*10 +ld;
    answ/=10;
} 
cout<<reverse<<endl;
}


}

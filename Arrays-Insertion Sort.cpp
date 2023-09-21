// https://hack.codingblocks.com/app/contests/4001/1068/problem

#include<iostream>
using namespace std;
void inc(int n){
	int arr[100000];
	int i, j, ele;
	for(i = 0; i <= n-1; i++){
		cin >> arr[i];
	}
for(int i = 1; i <= n-1; i++){   //unsorted part se element ko sorted part me lane ka kaam ye loop kar rha.
        ele = arr[i];

        for( j = (i - 1); j >= 0; j--){
            if ( ele < arr[j] ){              // 5 < 3 <---- yes (toh waise me arr[j] ko aage bhejdo)
                arr[ j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = ele;  // agar loop puraa khatam karke aya waise case me j ke value -1 rhayegi.. mujhe kya karna (j ke value me +1 kaarna aur usme wo element dal dena)
                           // suppose break hoke ayi; waise case me j me again +1 karke waha ele put kar dege
    }

    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " "; 
    }
}

int main() {
	int n;
	cin >> n;
	inc (n);
	return 0;
}

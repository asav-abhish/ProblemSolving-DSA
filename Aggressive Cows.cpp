// https://hack.codingblocks.com/app/contests/4001/1056/problem

#include<iostream>
#include<algorithm>
using namespace std;
bool amiabletoplaceallnoofcows (int arr[],int n,int cow,int distance){
	int cowplacestillnow = 1;
	int cowplace = arr[0];

	for(int i=1; i<n; i++){
		if(arr[i] - cowplace >= distance){
			cowplacestillnow++;
			cowplace = arr[i];
			if(cowplacestillnow == cow){
				return true;
			}
		}
	}
	if(cowplacestillnow < cow){
		return false;
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	int cow;
	cin>>cow;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	sort(arr,arr+n);
	int s = arr[0];
	int e = arr[n-1] - arr[0];
	int abhitakkaans;

	while(s<=e){
		int mid = (s+e)/2;
		if(amiabletoplaceallnoofcows(arr,n,cow,mid)){
			abhitakkaans = mid;
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	cout<< abhitakkaans<<endl;
	return 0;
}

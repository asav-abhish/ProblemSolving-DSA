// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

class Solution{
	public:
	int power (long long mid, int n, int m){
	    long long sum = 1;
	    while(n){
	        sum = sum * mid;
    	    if(sum > m) return 2;
    	    n--;
	    }
	     if (sum == m ) return 1;
    	    else return 0;
	    
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    long long start = 1;
	    long long end = m;
	    long long ans = -1;
	    while(start <= end){
	        long long mid = start + (end - start) / 2;
	        long long sum = power(mid,n,m);
	        if(sum == 1){
	            ans = mid;
	            start = mid + 1;
	            return ans;
	        }
	        else if(sum == 2){
	            
	            end = mid - 1;
	        }
	        else{
	            start = mid+1;
	        }
	    }
	    return ans;
	}  
};

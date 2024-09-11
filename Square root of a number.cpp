// https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int start = 1;
        long long int end = n;
        long long int ans = 1;
        while(start <= end){
            long long mid = (start + end) / 2;
            long long sum = mid * mid;
            if(sum <= n){
                ans = max(ans,mid);
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
};

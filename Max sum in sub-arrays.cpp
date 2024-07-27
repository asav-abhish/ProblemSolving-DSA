//  https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        int maxi = 0;
        for(int i=1; i<n; i++){
            int sum = arr[i]+arr[i-1];
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};

// https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long long int ts = n * (n+1) / 2;
        long long int ans = 0;
           
        for(int i=0; i<n-1; i++){
            ans += array[i];
        }
        return ts - ans;
    }
};

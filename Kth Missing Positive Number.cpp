// https://leetcode.com/problems/kth-missing-positive-number/submissions/1406297818/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int high = n-1;
        int low = 0;
        int mid;
        while(low<=high){
             mid = (high+low) / 2;
            if (arr[mid] - (mid+1) < k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        // arr[high] + more
        return k+high+1;  // high + 1 is same as low.
    }
};

// https://leetcode.com/problems/sort-array-by-parity/submissions/1339866793/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int p = n;
        vector<int> v(n);
        int e = 0;
        for (int i=0; i < p; i++) {
            if(nums[i] % 2 == 0){
                v[e++] = nums[i];
            }
            else{
                v[n-1] = nums[i];
                n--;
            }
        }return v;
    }
};

// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int start = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                start++;
            } else {
                start = 0;
            }
            ans = max(ans, start);
        }
        return ans;
    }
};

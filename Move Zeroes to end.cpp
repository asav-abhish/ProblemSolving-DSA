// https://leetcode.com/problems/move-zeroes/submissions/1322128037/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                idx = i;
                break;
            }
        }
        if (idx != -1) {
            for (int i = idx + 1; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[idx++], nums[i]);
                }
            }
        }
    }
};

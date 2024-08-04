// https://leetcode.com/problems/binary-search/submissions/1344650911/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                return i; 
            }
        }
        return -1;
    }
};

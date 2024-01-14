// https://leetcode.com/problems/sort-an-array/submissions/1146316738/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};

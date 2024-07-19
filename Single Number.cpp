// https://leetcode.com/problems/single-number/submissions/1326554804/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xori=0;
        for(int i =0; i<nums.size(); i++){
            xori ^= nums[i];
        }
        return xori;
    }
};

// https://leetcode.com/problems/missing-number/submissions/1324385269/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 =0;
        for (int i = 0; i < n; i++) {
            xor1 = xor1 ^ nums[i];
            xor2 = xor2 ^ i;
        }
        xor2 = xor2 ^ n;

        return xor2 ^ xor1;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res ^= i;
            res ^= nums[i];
        }
        return res ^ nums.size();
    }
};

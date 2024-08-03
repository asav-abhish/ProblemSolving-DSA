// https://leetcode.com/problems/permutations-ii/submissions/1343301752/

class Solution {
public:
    bool kyaswaphonachaiye(vector<int> nums, int i, int j){
        for(int k = i; k< j; k++){
            if(nums[k] == nums[j]) return false;                                 // 3 0 3 3 iss case ko rokne ke liye
        }
        return true;
    }
    void fun(vector<vector<int>>& ans, vector<int> nums, int i, int n) {
        if (i == n) {
            ans.push_back(nums);
        }

        for (int j = i; j < n; j++) {
            bool b = kyaswaphonachaiye(nums, i, j);
            if (b) {
                swap(nums[i], nums[j]);
                fun(ans, nums, i + 1, n);
                // swap(nums[i],nums[j]);
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        fun(ans, nums, 0, n);

        return ans;
    }
};

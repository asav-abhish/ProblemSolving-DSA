//  https://leetcode.com/problems/permutations/submissions/1343279912/

class Solution {
public:
    void fun(vector<vector<int>>& ans,vector<int> nums, int i,int n ){
        if(i == n){
            ans.push_back(nums);
        }

        for(int j=i; j<n; j++){
            swap(nums[i],nums[j]);
            fun(ans,nums,i+1,n);
            //swap(nums[i],nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        fun(ans,nums,0,n);

        return ans;
    }
};

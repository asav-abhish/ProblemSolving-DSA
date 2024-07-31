// https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/1339829431/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.size());
        int odd = 1, even = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                v[even] = nums[i];
                even+=2;
            }
            else{
                v[odd] = nums[i];
                odd+=2;
            }
        }
        return v;
    }
};

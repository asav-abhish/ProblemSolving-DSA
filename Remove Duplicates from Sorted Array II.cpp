// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/1323325716/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(auto k : nums){
            if(i<2 || k > nums[i-2]){
                nums[i] = k;
                i++;
            }
        }
        return i;
    }
};

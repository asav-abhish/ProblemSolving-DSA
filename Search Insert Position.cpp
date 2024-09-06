// https://leetcode.com/problems/search-insert-position/submissions/1381064140/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        if(target > nums[end]) return end+1;
        while(start <= end){
            int mid = (start+end)/2;
            if(nums[mid] == target) return mid;

            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return start;
    }
};

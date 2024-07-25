// https://leetcode.com/problems/majority-element/submissions/1333310408/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int ele ;
        for (int i = 0; i < n; i++) {
            if(cnt == 0){
                cnt++;
                ele = nums[i];
            }
            else if(ele == nums[i]) cnt++;
            else cnt--;
        }
        return ele;
        
    }
};

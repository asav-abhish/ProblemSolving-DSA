//  https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        for (int i = 0; i < n; i++) {

            if (cnt1 == 0 && ele2 != nums[i] ) {
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            else{
                cnt1--; cnt2--;
            }
        }
        cnt1 = 0; cnt2 = 0;
        for(int i=0; i<n; i++){
            if(ele1 == nums[i]) cnt1++;
            if(ele2 == nums[i]) cnt2++;
        }

        if(cnt1 > n/3) v.push_back(ele1);
        if(cnt2 > n/3 && ele1 != ele2) v.push_back(ele2);
        return v;
    }
};

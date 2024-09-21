// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/1397736506/

class Solution {
public:

    int fun(vector<int> nums, int mid){
        int ans = 0;
        for(int i = 0; i< nums.size(); i++){
            ans += ceil ( nums[i] / (double)mid );

        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *(max_element(nums.begin(),nums.end()));

        while(low <= high){
            int mid = (high+low) / 2;
            int a = fun(nums,mid);
            if ( a <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

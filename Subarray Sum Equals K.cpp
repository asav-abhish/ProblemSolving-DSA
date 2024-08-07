// https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int , int> m;
        int cnt = 0;
        int presum = 0;
        m[0] = 1;
        for(int i=0; i<nums.size(); i++){
            presum += nums[i];
            int remove = presum - k;

            cnt += m [remove];
            m[presum] += 1;
        }
        return cnt;
    }
};

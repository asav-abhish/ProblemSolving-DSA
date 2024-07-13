// https://leetcode.com/problems/largest-element-in-an-array-after-merge-operations/solutions/

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        stack<long long> s;
        int n = nums.size();
        s.push(nums[n-1]);

        for(int i = nums.size()-2; i>=0; i--){
            
            long long a = s.top();
            if(s.top () >= nums[i]){
                long long sum = s.top() + nums[i];
                s.pop();
                s.push(sum);  
            }
            else{
                s.pop();
                s.push(nums[i]);
            }
        }
        return s.top();
    }
};

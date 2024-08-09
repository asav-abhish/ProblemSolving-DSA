// https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int>, greater<int> > l;
        for(auto i:nums){
            l.push(i);
            if(l.size() > k) l.pop();
        }
        return l.top();
    }
};

// https://leetcode.com/problems/most-frequent-even-element/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            if (i % 2 != 0)
                continue;
            mp[i]++;
        }
        if (mp.size() == 0)
            return -1;
        int maxi = -1;
        int ans;
        for (auto y : mp) {
            if (y.second > maxi) {
                maxi = y.second;
                ans = y.first;
            }
        }
        return ans;
    }
};

// https://leetcode.com/problems/merge-intervals/submissions/1352375312/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (ans.size() == 0 || ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            } else {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
        }
        return ans;
    }
};

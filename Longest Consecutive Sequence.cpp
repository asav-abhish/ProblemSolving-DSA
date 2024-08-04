//  https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;

        set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        int longest = 1;
        for(auto itr : s){
            if(s.find(itr-1) == s.end()){
                int cnt = 1;
                int x = itr;
                while(s.find(x+1) != s.end()){
                    cnt++;
                    x +=1;
                }
                longest = max(longest, cnt);
            }
        }


        return longest;
    }
};

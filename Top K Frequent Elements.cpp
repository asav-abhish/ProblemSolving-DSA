//  https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int q=k;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > p;
        for(auto x : m){
            p.push(make_pair(x.second,x.first));
            if(p.size() > k){
                p.pop();
            }
        }
        while(p.size()){
            v.push_back(p.top().second);
            p.pop();
        }
        return v;

    }
};

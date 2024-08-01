// https://leetcode.com/problems/sort-even-and-odd-indices-independently/submissions/1340879991/

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector <int> v;
        for(int i=0; i<nums.size(); i++){
            if (i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(),odd.end(), greater<int>());
        //reverse(odd.begin(), odd.end());
        
        for(int i=0; i<odd.size(); i++){
            v.push_back(even[i]);
            v.push_back(odd[i]);
        }
        if(even.size()>odd.size()){
            v.push_back(even[even.size()-1]);
        }

        return v;
    }
};

// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector <vector <int>> v;
        sort(nums.begin(),nums.end());
        for(int i =0; i<n-2; i++){

            if (i != 0 && nums[i] == nums[i - 1]) continue;
            int a = nums[i];
            int left = i+1;
            int right = n-1;
            while(left < right){
              
                if(a + nums[left] + nums[right] == 0 && i!=left && left!=right && i!=right ){
                    vector<int> vi = {a , nums[left], nums[right]};
                    v.push_back(vi);
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]) left++;
                    while(left < right && nums[right] == nums[right+1]) right--;
                }
                else if(a + nums[left] + nums[right] < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return v;
    }
};

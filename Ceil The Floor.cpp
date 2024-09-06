// https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int> ans;
        int mi = -1;
        int max = INT_MAX;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] <= x && mi < arr[i]){
                mi = arr[i];
            }
        }
        ans.push_back(mi);
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] >= x && arr[i] < max){
                max = arr[i];
            }
        }
        if(max == INT_MAX) max=-1;
        ans.push_back(max);
        return ans;
    }
};

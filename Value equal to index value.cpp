// https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int> a;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == i+1) a.push_back(i+1);
        }
        return a;
    }
}

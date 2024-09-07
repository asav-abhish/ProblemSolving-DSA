// https://www.geeksforgeeks.org/problems/rotation4723/1

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int low = 0, end = n-1;
        while(low<=end){
            if(arr[low] <= arr[end]) return low;
            int mid = (low+end)/2;
            if(arr[low] <= arr[mid]){
                low = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return low-1;
    }
};

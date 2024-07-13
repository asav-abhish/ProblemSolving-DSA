// https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int max1 = arr[0];
        int max2 = -1;
        
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && max1 != arr[i]){
                max2 = arr[i];
            } 
        }
        return max2; 
    }
}

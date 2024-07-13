// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>maxi) {
                maxi = arr[i];
            }
        } 
        return maxi;
    }
};

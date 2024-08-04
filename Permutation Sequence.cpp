// https://leetcode.com/problems/permutation-sequence/description/

class Solution {
public:
    string getPermutation(int n, int k) {
        int arr[n] ;
        string s;
        for(int i=0; i<n; i++){
            arr[i]= i+1;
        }
         for(int i =0; i<k-1; i++){
         next_permutation(arr,arr + n);
         }
        for(int i=0; i<n; i++){
            s += to_string(arr[i]);
        }
        return s;

    }
}

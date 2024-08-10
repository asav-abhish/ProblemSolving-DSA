// https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1;
        int m1 = m;
        int n1 = n;
        while(n1 > 0 && m1 > 0){
            if(nums1[m1-1] > nums2[n1-1]){
                nums1[k] = nums1[m1-1];
                m1--;
            }
            else{
                nums1[k] = nums2[n1-1];
                n1--;
            }
            k--;
        }
        
        while(m1){
            nums1[k--] = nums1[m1-1];
            m1--;
        }
        while(n1){
            nums1[k--] = nums2[n1-1];
            n1--;
        }
    }
};

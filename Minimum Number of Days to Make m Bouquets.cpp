// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/1391410968/

class Solution {
public:

    bool fun(vector<int>& bD, long long mid, int m, int k){
        long long ans = 0, currentsum = 0;
        for(int i=0; i<bD.size(); i++){
            if(bD[i] <= mid){
                currentsum++;
            }
            else{
                ans += (currentsum / k);
                currentsum = 0;
            }
        }
        ans += (currentsum / k);
         return ans >= m;
        
    }

    int minDays(vector<int>& bD, int m, int k) {
        int n = bD.size();
        //if (n < (m*k) ) return -1;
        if (m > n / k) return -1;  

        long long high = *(max_element(bD.begin(), bD.end()));
        long long low = *(min_element(bD.begin(), bD.end()));

        while(low <= high){
            long long mid = high + (low - high) / 2;
            if(fun(bD, mid, m, k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

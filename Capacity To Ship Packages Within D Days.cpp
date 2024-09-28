// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/1404692724/

class Solution {
public:

    int fun(vector<int>& weights, int mid, int days, int n ){
        int sum = 0;
        int day = 1;
        for(int i=0; i<n; i++){
            sum += weights[i];
            if(sum > mid){
                day++;
                sum = weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += weights[i];
        }

        if(days == 1 ) return sum;

        int low = *max_element(weights.begin(), weights.end());
        long long high = sum;
        while(low <= high){
            int mid = (low + high) / 2;
            int ans = fun(weights, mid, days, n);

            if(ans > days)  {
                low = mid + 1;
            }
            else { 
                high = mid - 1;
            }
        }
        return low; 
    }
};

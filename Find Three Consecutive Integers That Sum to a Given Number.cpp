// https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/submissions/

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector <long long > ans;
        if(num% 3 != 0) return ans;
        else{
            long long a = num/3;
            if((a-1)+a+(a+1) == num){
                ans.push_back(a-1);
                ans.push_back(a);
                ans.push_back(a+1);
            }
        }
        return ans;
    }
};

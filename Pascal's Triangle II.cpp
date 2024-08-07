//  https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        int n = rowIndex;
        for (int i = 0; i <= n; i++) {
            long long icj = 1;
            for (int j = 0; j <= i; j++) {
                if(i == n){
                    v.push_back(icj);
                }
                long long k = icj * (i - j) / (j + 1);
                icj = k;
            }
        }
        return v;
    }
};

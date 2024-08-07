// https://leetcode.com/problems/pascals-triangle/submissions/1348153082/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector <vector <int>> ans;
        
        for(int i=0; i<n; i++){
            int icj = 1;
            vector <int> v;
            for(int j= 0; j<=i; j++){
                
                v.push_back(icj);
                int k = icj *(i-j)/(j+1);
                icj = k;
            }
            ans.push_back(v);
        }
        return ans;;
    }
};

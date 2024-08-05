// https://leetcode.com/problems/spiral-matrix/submissions/1345802508/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr = 0;
        int er = matrix.size() - 1;
        int sc = 0;
        int ec = matrix[0].size() - 1;
        std::vector<int> ans;

        while (er >= sr and ec >= sc) {
            // start row print
            for (int j = sc; j <= ec; j++) {
                ans.push_back(matrix[sr][j]);
            }
            sr++;
            // last col
            for (int k = sr; k <= er; k++) {

                ans.push_back(matrix[k][ec]);
            }
            ec--;
            // last row
            if (sr <= er) {
                for (int m = ec; m >= sc; m--) {

                    ans.push_back(matrix[er][m]);
                }
                er--;
            }

            if (sc <= ec) {
                // ist col
                for (int l = er; l >= sr; l--) {

                    ans.push_back(matrix[l][sc]);
                }
                sc++;
            }
        }
        return ans;
    }
};

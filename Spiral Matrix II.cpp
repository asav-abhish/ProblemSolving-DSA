// https://leetcode.com/problems/spiral-matrix-ii/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int sr = 0;
        int er = n - 1;
        int sc = 0;
        int ec = n - 1;
        // std::vector<vector<int>> matrix;
        vector<vector<int>> matrix(n, vector<int>(n));

        int i = 1;
        while (er >= sr and ec >= sc) {
            // start row print
            for (int j = sc; j <= ec; j++) {
                matrix[sr][j] = i++;
            }
            sr++;
            // last col
            for (int k = sr; k <= er; k++) {

                matrix[k][ec] = i++;
            }
            ec--;
            // last row
            if (sr <= er) {
                for (int m = ec; m >= sc; m--) {

                    matrix[er][m] = i++;
                }
                er--;
            }

            if (sc <= ec) {
                for (int l = er; l >= sr; l--) {
                    matrix[l][sc] = i++;
                }
                sc++;
            }
        }
        return matrix;
    }
};

// https://leetcode.com/problems/unique-paths/description/?envType=daily-question&envId=2023-09-03    

// from Leetcode

class Solution {
    public:
    int path (int arr[101] [101],int sr,int sc){
        if(sr == 0 && sc == 0){
            return arr[sr][sc] = 1;
        }
        if(sr < 0 || sc < 0){
            return 0;
        }
        if(arr[sr][sc] != 1){
            return arr[sr][sc];
        }
        return arr[sr][sc] =  path (arr,sr-1, sc) + path (arr,sr, sc-1); 
    }
public:
    int uniquePaths(int m, int n) {
        int arr[101][101];
        for(int i = 0; i<101; i++){
            for(int j = 0; j<101; j++){
                arr[i][j] = 1;
            }
        }

        return path(arr,m-1,n-1);
    }
};

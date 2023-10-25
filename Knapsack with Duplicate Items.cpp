//  https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
    vector<int> dp(W + 1, 0);

    for (int i = 1; i <= N; i++) {
        for (int j = wt[i - 1]; j <= W; j++) {
            dp[j] = max(dp[j], dp[j - wt[i - 1]] + val[i - 1]);
        }
    }

    return dp[W];
    }
};

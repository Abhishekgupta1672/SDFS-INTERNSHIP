class Solution {
public:
    int rec(int amount , int n ,vector<int>&coins, vector<vector<int>>&dp){
        if(amount==0) return dp[amount][n]=0;
        if(n==0) return 100005;
        if(dp[amount][n]!=-1) return dp[amount][n];
        if(amount>=coins[n-1])
            return dp[amount][n] = min(rec(amount-coins[n-1],n,coins,dp)+1,rec(amount,n-1,coins,dp));
        return dp[amount][n] = rec(amount,n-1,coins,dp);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(amount+1,vector<int>(n+1,-1));
        rec(amount,n,coins,dp);
        return dp[amount][n]>=100005?-1:dp[amount][n];
    }
};

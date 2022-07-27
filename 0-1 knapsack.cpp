class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(auto x:strs)
        {
            int a = 0 , b = 0;
            for(int i=0;i<x.size();i++)
            {
                if(x[i]=='0') a++;
                else b++;
            }
            for(int i=m;i>=a;i--)
            {
                for(int j=n;j>=b;j--)
                {
                    dp[i][j] = max(dp[i][j], dp[i-a][j-b]+1);
                }
            }
        }
       return dp[m][n];
    }
};

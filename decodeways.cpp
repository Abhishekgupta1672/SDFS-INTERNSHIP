class Solution {
public:
    int dp[100];
    int solve(string s,int idx)
    {
        if(idx==s.size())
            return 1;
        if(s[idx]=='0')
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        if(idx==s.size()-1)
            return 1;
        string temp = s.substr(idx,2);
        int res1 = solve(s,idx+1);
        int res2 = (stoi(temp)>=1 && stoi(temp)<=26)?solve(s,idx+2):0 ;
        return dp[idx] = res1+res2;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof dp);
        return solve(s,0);
    }
};

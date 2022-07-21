class Solution {
public:
    void solve(int idx, vector<int>&v, vector<int>&ds, int target, vector<vector<int>>&res, int k)
    {
        if(target==0 && ds.size()==k)
        {
            res.push_back(ds);
            return;
        }
        for(int i = idx ; i < 9; i++)
        {
            if(v[i]>target) break;
            ds.push_back(v[i]);
            solve(i+1,v,ds,target-v[i],res,k);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,v,ds,n,res,k);
        return res;
    }
};

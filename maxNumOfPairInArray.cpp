class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int cnt=0;
        for(auto x:mp)
        {
            cnt+=x.second/2;
        }
        vector<int>t;
        t.push_back(cnt);
        t.push_back(nums.size()-2*cnt);
        return t;
        // return {cnt,nums.size()-2*cnt};
        
    }
};

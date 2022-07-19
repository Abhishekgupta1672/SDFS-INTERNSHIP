class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int>mp;
        for(auto x:s) mp[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto x:mp)
            pq.push({x.second,x.first});
        while(!pq.empty())
        {
            int sz = pq.top().first;
            while(sz)
            {
                ans+=pq.top().second;
                sz--;
            }
            pq.pop();
        }
        return ans;
    }
};

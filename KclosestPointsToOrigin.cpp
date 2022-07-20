class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>>pq;
        for(auto x:points)
        {
            pq.push({x[0]*x[0]+x[1]*x[1],x[0],x[1]});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>res(k);
        for(int i=0;i<k;i++)
        {
            vector<int>top = pq.top();
            pq.pop();
            res[i] = {top[1],top[2]};
        }
        return res;
    }
};

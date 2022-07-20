class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size() ,res = 0;
        for(int i=0;i<n;++i)
        {
            unordered_map<long double,int>mp;
            int cnt = 1 , localmax = 0;
            for(int j=i+1;j<n;++j)
            {
                if(points[i][0]==points[j][0] && points[i][1]==points[j][1])
                    cnt++;
                else if(points[i][0]==points[j][0])
                    mp[INT_MAX]++;
                else
                {
                    long double slope = (long double)(points[j][1]-points[i][1])/(long double)(points[j][0]-points[i][0]);
                    mp[slope]++;
                }
            }
            for(auto x:mp)
                localmax = max(localmax,x.second);
            localmax+=cnt;
            res = max(res,localmax);
        }
        return res;
    }
};

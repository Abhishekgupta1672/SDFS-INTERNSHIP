class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        int x = jug1Capacity , y = jug2Capacity , z = targetCapacity;
        int m[] = {x,-x,y,-y};
        map<int,int>mp;
        queue<int>q;
        q.push(0);
        mp[0] = 1;
        while(!q.empty())
        {
            int tp = q.front();
            q.pop();
            if(tp == z) return true;
            for(int i=0;i<4;i++)
            {
                int node = tp+m[i];
                if(node < 0 || node>x+y)
                    continue;
                if(mp[node]==0)
                {
                    mp[node] = 1;
                    q.push(node);
                }
            }
        }
        return false;
    }
};

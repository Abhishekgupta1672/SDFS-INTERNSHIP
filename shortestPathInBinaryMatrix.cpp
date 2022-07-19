class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int i, int j, int n, vector<vector<bool>>& visited)
    {
        return (i>=0 and i<n and j>=0 and j<n and grid[i][j]==0 and !visited[i][j]);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        int ans = 0;
        queue<pair<int,int>>q;
        if(grid[0][0]==0)
        {
            q.push({0,0});
            vis[0][0]=true;
        }
        while(!q.empty())
        {
            int sz = q.size();
            ans++;
            for(int x=0;x<sz;x++)
            {
                pair<int,int>frontNode = q.front();
                q.pop();
                int i = frontNode.first, j = frontNode.second;

                if(i==n-1 and j==n-1) return ans;

                for(int k=i-1;k<=i+1;k++)
                {
                    for(int l=j-1;l<=j+1;l++)
                    {
                        if(isValid(grid,k,l,n,vis))
                        {
                            q.push({k,l});
                            vis[k][l] = true;
                        }
                    }
                }
            }
        }
        return -1;
    }
};

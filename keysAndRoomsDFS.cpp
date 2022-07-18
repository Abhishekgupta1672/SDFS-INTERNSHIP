class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>dfs(n);
        dfs[0] = true;
        stack<int>st;
        st.push(0);
        while(!st.empty())
        {
            int tp = st.top();
            st.pop();
            for(auto itr:rooms[tp])
            {
                if(!dfs[itr])
                {
                    dfs[itr] = true;
                    st.push(itr);
                }
            }
        }
        for(bool v: dfs)
            if(!v) return false;
        return true;
    }
};

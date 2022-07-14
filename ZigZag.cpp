class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        int cnt = 0;
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>v;
            for(int i=0;i<sz;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                if(i==sz-1)
                    cnt++;
            }
            if(cnt%2==0) reverse(v.begin(),v.end());
            res.push_back(v);
        }
        return res;
    }
};

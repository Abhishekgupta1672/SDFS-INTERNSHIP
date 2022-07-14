class Solution {
public:
    TreeNode* solve(vector<int>&pre,int ps,int pe,vector<int>&in,int is,int ie,map<int,int>&mp)
    {
        if(ps>pe || is>ie) return NULL;
        TreeNode* root = new TreeNode(pre[ps]);
        int inroot = mp[root->val];
        int lft = inroot-is;
        root->left = solve(pre,ps+1,ps+lft,in,is,inroot-1,mp);
        root->right = solve(pre,ps+lft+1,pe,in,inroot+1,ie,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in)
    {
        if(pre.size() != in.size()) return NULL;
        map<int,int>mp;
        for(int i=0;i<in.size();i++)
            mp[in[i]]=i;
        return solve(pre,0,pre.size()-1,in,0,in.size()-1,mp);
    }
};

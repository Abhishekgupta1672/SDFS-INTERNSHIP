class Solution {
public:
    void solve(TreeNode* root , vector<int>&res ,int x)
    {
        if(!root->left && !root->right)
        {
            res.push_back(x);
            return;
        }
        if(root->left) solve(root->left,res,x*10+root->left->val);
        if(root->right) solve(root->right,res,x*10+root->right->val);
    }
    
    int sumNumbers(TreeNode* root) {
        vector<int>res;
        solve(root,res,root->val);
        int ans = 0;
        for(int i=0;i<res.size();i++)
        {
            ans+=res[i];
        }
        return ans;
    }
};

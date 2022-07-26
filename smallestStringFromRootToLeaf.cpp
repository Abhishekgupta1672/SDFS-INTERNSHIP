class Solution {
public:
    string res = "";
    void solve(TreeNode* root , string ans)
    {
        ans = char(root->val+'a')+ans;
        if(!root->left && !root->right)
        {
            if(res=="")
                res = ans;
            else
                res = min(res,ans);
        }
        if(root->left) solve(root->left,ans);
        if(root->right) solve(root->right,ans);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        if(!root) return res;
        solve(root,"");
        return res;
    }
};

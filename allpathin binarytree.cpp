class Solution {
public:
    void solve(TreeNode* root , vector<string>&res , string t)
    {
        if(!root->left && !root->right)
        {
            res.push_back(t);
            return;
        }
        if(root->left)
            solve(root->left, res, t+"->"+to_string(root->left->val));
        if(root->right)
            solve(root->right, res, t+"->"+to_string(root->right->val));      

    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root) return res;
        solve(root , res,to_string(root->val));
        return res;
    }
};

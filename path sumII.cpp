class Solution {
public: 
    void solve(TreeNode* root, vector<int>temp, int target, vector<vector<int>>&res)
    {
        if(!root) return;
        if(!root->left && !root->right && target==root->val)
        {
            temp.push_back(root->val);
            res.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        solve(root->left,temp,target-root->val,res);
        solve(root->right,temp,target-root->val,res);
    }
    vector<vector<int>>pathSum(TreeNode* root, int targetSum)
    {
        vector<vector<int>>res;
        solve(root,{},targetSum,res);
        return res;
    }
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>res;
        if(!root) return NULL;
        stack<TreeNode*>st;
        while(!st.empty() || root!=NULL)
        {
            if(root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                res.push_back(root->val);
                root = root->right;
            }
        }
        return res[k-1];
    }
};

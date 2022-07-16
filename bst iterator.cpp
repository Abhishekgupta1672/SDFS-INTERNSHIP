class BSTIterator {
public:
    stack<TreeNode*>st;
    void inorder(TreeNode* root)
    {
        while(root)
        {
            st.push(root);
            root = root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        TreeNode* temp = st.top();
        st.pop();
        inorder(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

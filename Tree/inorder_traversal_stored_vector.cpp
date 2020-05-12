 void solve(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
            return;
        solve(root->left,v);
        v.push_back(root->val);
         solve(root->right,v);
    }
 vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        solve(root,v);
        return v;
    }

/*
Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2]
*/

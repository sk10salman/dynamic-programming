/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v1,v2;
    void solve_left(TreeNode *root)
    {
        if(root==NULL)
        {
            v1.push_back(0);
            return;
        }
        v1.push_back(root->val);
        solve_left(root->left);
        solve_left(root->right);
        
    }
     void solve_right(TreeNode *root)
    {
        if(root==NULL)
        {
            v2.push_back(0);
            return;
        }
        v2.push_back(root->val);
        solve_right(root->right);
        solve_right(root->left);
        
    }
    bool isSymmetric(TreeNode* root) {
         if(root==NULL)
             return true;
        solve_left(root->left);
        solve_right(root->right);
       return v1==v2;
    }
};



/*


For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
 

But the following [1,2,2,null,3,null,3] is not:

    1
   / \
  2   2
   \   \
   3    3

*/

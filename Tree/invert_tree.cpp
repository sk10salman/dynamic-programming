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
   
    TreeNode* invertTree(TreeNode* root) {
     if (!root)
            return nullptr;
        if (root->left && root->right) {       
            swap(root->left, root->right);            
        } else if (root->left) {
            root->right = root->left;
            root->left = nullptr;
        } else {
            root->left = root->right;
            root->right = nullptr;
        }
        invertTree (root->left);
        invertTree (root->right);
              
        return root;     
        
    }
};


/*



Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1



*/

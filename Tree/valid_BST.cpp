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
    bool solve1(TreeNode* root,int data)
    {
        if(root==NULL)
             return true;
          if(root->val>=data)
              return false;
        return solve1(root->left,data)&&solve1(root->right,data);
    }
    bool solve2(TreeNode* root,int data)
    {
        if(root==NULL)
             return true;
          if(root->val<=data)
              return false;
        return solve2(root->left,data)&&solve2(root->right,data);
    }
    bool isValidBST(TreeNode* root) {
       
        if(root==NULL)
             return  true;

       return (solve1(root->left,root->val)&&solve2(root->right,root->val)&&isValidBST(root->left)&&isValidBST(root->right));
    }
};




/*


Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:

    2
   / \
  1   3

Input: [2,1,3]
Output: true
Example 2:

    5
   / \
  1   4
     / \
    3   6

Input: [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4
*/

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
    
     int solve(TreeNode* root,int &sum)
     {
         if(root==NULL)
             return 0;
        int l= solve(root->left,sum);
          int r=solve(root->right,sum);
         int temp = max(root->val,(root->val+max(l,r)));
         int ans=max(temp,l+r+root->val);
         sum = max(sum,ans);
  return temp;
         
     }
    int maxPathSum(TreeNode* root) {
      
    if(root==NULL)
        return 0;
        int sum=INT_MIN;
        solve(root,sum);
       return sum;
    }
};



/*

Given a non-empty binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.

Example 1:

Input: [1,2,3]

       1
      / \
     2   3

Output: 6
Example 2:

Input: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

Output: 42

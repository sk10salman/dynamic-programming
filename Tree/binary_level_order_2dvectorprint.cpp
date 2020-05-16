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
    #include<bits/stdc++.h>
    vector<vector<int>> ans;
    void solve(TreeNode * root,int k)
    {
        if(root==nullptr) return;
    
    if(ans.size()<=k) ans.push_back({});
    
    if(root!=nullptr) ans[k].push_back(root->val);
  
  
        solve(root->left,k+1);
        solve(root->right,k+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        solve(root,0);
        return ans;
    }
};


/*


Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]


*/

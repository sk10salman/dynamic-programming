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
  
    int minDepth(TreeNode* root) {
     if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        while(q.size()){
            int s=q.size();
            while(s--){
                TreeNode* val = q.front(); q.pop();
                if(!val->left && !val->right)return level;
                if(val->left)q.push(val->left);
                if(val->right)q.push(val->right);
            }
            level++;
        }
        return 0;
 
    }
};



/*
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its minimum depth = 2.

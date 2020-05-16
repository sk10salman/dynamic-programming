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
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void sum(TreeNode* root,int level,int h,int *s)
    {
        if(root==NULL)
            return ;
        if(level==h)
        {
            if(root)
                *s +=root->val;
        }
        sum(root->left,level+1,h,s);
         sum(root->right,level+1,h,s);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        int h= height(root);
        int level=1;
        int s=0;
        sum(root,level,h,&s);
        return s;
    }
};




/*

Example 1:



Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

*/

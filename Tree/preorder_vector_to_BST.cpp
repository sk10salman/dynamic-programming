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
    TreeNode * insert(TreeNode * root,int data)
    {
        TreeNode *temp = new TreeNode(data);
        if(root==NULL)
        {
            root=temp;
        }
        else if(root->val<data)
            root->right=insert(root->right,data);
        else
            root->left=insert(root->left,data);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *start=NULL;
        for(int i=0;i<preorder.size();i++)
        start=insert(start,preorder[i]);
        return start;
    }
};

/*
Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder traversal displays the value of the node first, then traverses node.left, then traverses node.right.)

It's guaranteed that for the given test cases there is always possible to find a binary search tree with the given requirements.

Example 1:

Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]
*/

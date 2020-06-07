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
    int solve(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(!root->left && !root->right)
            return root->val;
        int option1=root->val;
       
        int ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0;
        if(root->left&&root->left->left)
             ans1 += solve(root->left->left);
        if(root->left&&root->left->right)
             ans2 += solve(root->left->right);
        if(root->right&&root->right->left)
             ans3 += solve(root->right->left);
        if(root->right&&root->right->right)
             ans4 += solve(root->right->right);
        option1 += ans1+ans2+ans3+ans4;
         int option2=0,option3=0;
        if(root->left)
        
            option2 = solve(root->left);
        if(root->right)
            option3 = solve(root->right);
        return max(option1,option2+option3);
    }
    int rob(TreeNode* root) {
        if(root==NULL)
            return 0;
        return solve(root);
    }
};
/*
algo::::


**Make simple assumptions that if curr is taken then we have 4 options
i.e root->left->left , root->left->right , root->right->left , root->right->right
if above exists .
else {
// do not take the curr node - then you have two options to go :
root->left , root->right
final ans =max (summation of option1 , summation of option2 )
} **

/*
The thief has found himself a new place for his thievery again. There is only one entrance to this area, called the "root." Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that "all houses in this place forms a binary tree". It will automatically contact the police if two directly-linked houses were broken into on the same night.

Determine the maximum amount of money the thief can rob tonight without alerting the police.

Example 1:

Input: [3,2,3,null,3,null,1]

     3
    / \
   2   3
    \   \ 
     3   1

Output: 7 
Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
Example 2:

Input: [3,4,5,1,3,null,1]

     3
    / \
   4   5
  / \   \ 
 1   3   1

Output: 9
Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9.


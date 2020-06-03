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
    int diameterOfBinaryTree(TreeNode* root){
        int sum = 0;
        cout<<height(root, sum);
        return sum;
    }
    int height(TreeNode* root,int &dia){
        if(root==NULL)
            return 0;
        int l=height(root->left,dia);
        int r=height(root->right,dia);
        dia=max(dia,l+r);
        return max(l,r)+1;
    }
};
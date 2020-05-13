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
    int depth(TreeNode *node,int value,int num,int &parent){
        if(node==NULL)
            return 0;
        if(node->val==value)
            return num;
        parent=node->val;
        int left=depth(node->left,value,num+1,parent);
        if(left!=NULL)
            return left;
        parent=node->val;
        int right=depth(node->right,value,num+1,parent);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y)
            return false;
        int xp=-1,yp=-1;
        int a=depth(root,x,0,xp);
        int b=depth(root,y,0,yp);
        
        if(a==b && xp!=yp)
            return true;
        return false;
    }
};
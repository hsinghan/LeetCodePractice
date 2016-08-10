/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 **/
 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      //判斷tree是否為empty
        if(root==NULL || root->left==NULL && root->right==NULL)
        return root;
        
      ///////////////////將左右子樹做交換////////////////////
      //用到遞迴的概念
        TreeNode* temp; // 暫存
        temp = invertTree(root->left);// 將左子樹當作root然後去呼叫invertTree ，最後將結果移到暫存temp
        root->left = invertTree(root->right);/// 將右子樹當作root然後去呼叫invertTree ，最後將結果移到一開始的左子樹
        root->right = temp;//將暫存temp移到一開始的右子樹
        
        return root;
              
    }
};


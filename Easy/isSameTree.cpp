Q:給予兩個任意的tree，判斷這兩個tree是否相同
A:使用recurrsive idea

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    	//判斷是否有空樹
        if (p == NULL && q == NULL)
          return true;
    	else if (p == NULL || q == NULL)
    	{
    	  return false;
    	 }
    	 //如果兩個樹之中沒有空樹，進行值的判斷  
    	 else if (p->val != q->val)
    	    {
    	    	return false;
    	    }

    	//把左右子樹的結果進行and
    	return  ( isSameTree(p->left,q->left) && isSameTree(p->right,q->right) ) ;
        
    }
};
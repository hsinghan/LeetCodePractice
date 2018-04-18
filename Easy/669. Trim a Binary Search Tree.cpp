// Given a binary search tree and the lowest and highest boundaries as L and R, 
// trim the tree so that all its elements lies in [L, R] (R >= L). 
// You might need to change the root of the tree, 
// so the result should return the new root of the trimmed binary search tree.

// Example 1:
// Input: 
//     1
//    / \
//   0   2

//   L = 1
//   R = 2

// Output: 
//     1
//       \
//        2
// Example 2:
// Input: 
//     3
//    / \
//   0   4
//    \
//     2
//    /
//   1

//   L = 1
//   R = 3

// Output: 
//       3
//      / 
//    2   
//   /
//  1

// -----* idea *----------
// If the root value in the range [L, R]
//       we need return the root, but trim its left and right subtree;
// else if the root value < L
//       because of binary search tree property, the root and the left subtree are not in range;
//       we need return trimmed right subtree.
// else
//       similarly we need return trimmed left subtree.



// NOR Recursive 

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        
       // find the proper root
        while(root->val<L || root->val>R)
        {
            if(root->val<L) { root = root->right; }
            else { root = root->left; }
        }
        
        // temporary pointer for left and right subtree
        TreeNode *Ltemp = root;
        TreeNode *Rtemp = root;
        
        // remove the elements smaller than L
        while(Ltemp->left)
        {
            if( (Ltemp->left->val)<L ) { Ltemp->left = Ltemp->left->right; }
            else { Ltemp = Ltemp->left; }
        }
         // remove the elements larger than R
        while(Rtemp->right)
        {
            if( (Rtemp->right->val)>R) { Rtemp->right = Rtemp->right->left; }
            else { Rtemp = Rtemp->right; }
        }

        return root;
    }
};

// Recursive

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL) return NULL;
        if (root->val < L) return trimBST(root->right, L, R);
        if (root->val > R) return trimBST(root->left, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};

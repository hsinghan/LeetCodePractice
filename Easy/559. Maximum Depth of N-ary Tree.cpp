/*Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

For example, given a 3-ary tree:
We should return its max depth, which is 3.*/


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if (root == NULL)
        {
            return 0;
        }
        
        int Depth = 0;
        for(vector<Node*>::iterator it = root->children.begin(); it != root->children.end();it++)
        {
            Depth = max(Depth, maxDepth(*it));
        }
        return Depth+1;
        
    }
};

// problem statement is as following:
// In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.
//
// Two nodes of a binary tree are cousins if they have the same depth, but have different parents.
//
// We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.
//
// Return true if and only if the nodes corresponding to the values x and y are cousins.



// solution function is implemented here:

class Solution {

    int findDepthAndParent(TreeNode* root, int &parent, int value, int depth){
        if(!root) return false;
        if(root->val == value) return depth;
        parent = root-> val;
        int l = findDepthAndParent(root->left,parent,value,depth+1);
        if(l) return l;
        parent = root-> val;
        int r = findDepthAndParent(root->right,parent,value,depth+1);
        return r;
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val == y) return false;
        int xParent, yParent, xDepth, yDepth;

        xParent = -1;
        xDepth = findDepthAndParent(root,xParent,x,0);

        yParent = -1;
        yDepth = findDepthAndParent(root,yParent,y,0);

        if(xDepth == yDepth && xParent != yParent)
            return true;
        return false;
    }
};

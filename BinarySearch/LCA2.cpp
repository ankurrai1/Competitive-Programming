// lowestCommonAncestor
// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:

    bool findNodes(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode* &res){
        if(root == NULL) return false;
        // to the current node LCA any two variable should be true
        bool self = false, left = false, right = false;
        if(root == p || root == q){
            self = true;
            left = (p == q);
        }
        // check current  is true or found in next branch
        left = left || findNodes(root->left, p, q, res);
        right = right || findNodes(root->right, p, q, res); // no need of or because right is not touched yet

        if(self && left || self && right || left && right){
            if(res == NULL) res = root;
        }
        return self || left || right;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = NULL;
        findNodes(root, p, q, res);
        return res;
    }
};

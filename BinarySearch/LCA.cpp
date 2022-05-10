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

      bool findPaths(TreeNode* root, TreeNode* node, vector<TreeNode* > &arr){
        if(root == NULL) return false;
        if(root == node){
          arr.push_back(root);
          return true;
        }
        bool found = findPaths(root->left, node, arr) || findPaths(root->right, node, arr);
        if(found){
          arr.push_back(root);
        }
        return found;
      }

      TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          std::vector<TreeNode* > first, second;
          findPaths(root, p, first);
          findPaths(root, q, second);
          int f = first.size() - 1, s = second.size() - 1;
          cout << endl;
          while(f >= 0 && s >= 0 && first[f] == second[s]){
            f--; s--;
          }
          return first[f+1];
      }
  };


// for(TreeNode* a : first){
//     cout << a->val << " ";
// }
// cout << endl;
// for(TreeNode* a : second){
//     cout << a->val << " ";
// }

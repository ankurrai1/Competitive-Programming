#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// recursive solution
class Solution {
public:
    bool checkSymmetric(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;
        bool isValueSame = false;
        if(root1->val == root2->val) isValueSame = true;
        return isValueSame && checkSymmetric(root1->right, root2->left) &&
               checkSymmetric(root1->left, root2->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return checkSymmetric(root->left, root->right);
    }
};


//Solution Using STACK As DFS

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* p, *q; 
        
        stack<TreeNode*> stk; 
        stk.push(root->left);
        stk.push(root->right); 
        
        while (!stk.empty()) {
            p = stk.top(); // stack::pop() doesn't return
            stk.pop(); 
            q = stk.top();
            stk.pop(); 
            if (p == NULL && q == NULL) continue; 
            if (p == NULL || q == NULL || p->val != q->val) return false; 
            stk.push(p->left); 
            stk.push(q->right);
            stk.push(p->right);
            stk.push(q->left); 
        }
        return true; 
    }
};

// BFS Logic using queue

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode *u, *v; 
        
        queue<TreeNode*> q; 
        q.push(root->left);
        q.push(root->right); 
        
        while (!q.empty()) {
            u = q.front(); 
            q.pop(); // queue::pop() doesn't return 
            v = q.front();
            q.pop(); 
            if (u == NULL && v == NULL) continue; 
            if (u == NULL || v == NULL || u->val != v->val) return false; 
            q.push(u->left);
            q.push(v->right);
            q.push(u->right);
            q.push(v->left); 
        }
        return true; 
    }
};
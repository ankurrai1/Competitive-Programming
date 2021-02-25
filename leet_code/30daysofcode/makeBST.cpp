// your task is to to built hight balanced BST 


// Definition for a binary tree node.
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* makeBST(vector<int> &num, int l, int r){
        if(l <= r){
            int m = (l + r) / 2;
            TreeNode* node = new TreeNode(num[m]);
            node->left = makeBST(num, l, m-1);
            node->right = makeBST(num, m+1, r);
            return node;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums, 0, nums.size()-1);
    }
};
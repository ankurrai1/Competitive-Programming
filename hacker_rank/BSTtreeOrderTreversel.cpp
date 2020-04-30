// #Day2 30 april 2020


#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

// last level order function is responsible for printing values in level order

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }

	void levelOrder(Node * root){
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            cout << q.front()->data << " ";
            if(q.front()->left != NULL) q.push(q.front()->left);
            if(q.front()->right !=  NULL) q.push(q.front()->right);
            q.pop();
        }
	}

};//End of Solution

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;
        else if(l2->val < l1->val){
            head = new ListNode(l2->val);
            l2 = l2->next;
        }
        else{
            head = new ListNode(l1->val);
            l1 = l1->next;
        }
        ListNode* temp = head;
        while(l2 != NULL && l1 != NULL){
            if(l2->val < l1->val){
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else{
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            temp = temp->next;
        }
        while(l1 != NULL){
            temp -> next = l1;
            l1 = l1 -> next;
            temp = temp->next;
        }
        while(l2 != NULL){
            temp -> next = l2;
            l2 = l2 -> next;
            temp = temp->next;
        }
        return head;
    }
};


// optamized in space;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        if(!l1) return l2;
        else if(!l2) return l1;
        else if(l2->val < l1->val){
            head = l2;
            l2 = l2->next;
        }
        else{
            head = l1;
            l1 = l1->next;
        }
        ListNode* temp = head;
        while(l2 != NULL && l1 != NULL){
            if(l2->val < l1->val){
                temp->next = l2;
                l2 = l2->next;
            }
            else{
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        while(l1 != NULL){
            temp -> next = l1;
            l1 = l1 -> next;
            temp = temp->next;
        }
        while(l2 != NULL){
            temp -> next = l2;
            l2 = l2 -> next;
            temp = temp->next;
        }
        return head;
    }
};
// problem question link is as following

//https://leetcode.com/problems/add-two-numbers/

// only solution function is written


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *node = new ListNode(0);
        ListNode *curr = node;
        while(l1 != NULL || l2 != NULL || carry > 0){
            int s = 0;
            if(l1 != NULL){
                s += l1 -> val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                s += l2 -> val;
                l2 = l2->next;
            }
            s += carry;
            curr->next = new ListNode(s % 10);
            carry = s / 10;
            curr = curr -> next;
        }
        return node->next;
    };
};

#include<bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// JUST SOLUTION
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        if(head->val == INT_MIN) return true;
        head->val = INT_MIN;
        head = head->next;
        return hasCycle(head);
    }
};

// WAY to solve this problem
bool hasCycle(ListNode *head) 
{
    ListNode *fast;
    fast = head;
    while (head)
    {
        head = head->next;
        if (fast->next && fast->next->next)
            fast = fast->next->next;
        else
            return false;
            
        if (fast == head)
            return true;
    }
    
    return false;
}
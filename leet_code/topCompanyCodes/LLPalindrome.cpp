// task is to find given linked list is palindrome or not;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}

class Solution {
public:
    ListNode* temp;
    
    bool isPalindrome(ListNode* head) {
        temp = head;
        return palindromeCheck(head);;
    }

    // the recursive call well take the p pointer to the end of LL and
    // the temp class variable will keep track from start
    // we will comepair the full list in half and return true is all is going true else false;
    
    bool palindromeCheck(ListNode* p) {
        if(p == NULL) return true;
        bool isPali = palindromeCheck(p->next) & (p->val == temp->val);
        temp = temp -> next;
        return isPali;
    }
};
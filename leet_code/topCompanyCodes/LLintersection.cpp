#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//  time complexity will be O(n + m) and space O(n)

class Solution {
public:
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *th1 = headA;
        ListNode *th2 = headB;
        
        unordered_map<ListNode *, int> hash;
        while(th1 != NULL){
            hash[th1] = th1->val;
            th1 = th1->next;
        }
        while(th2 != NULL){
            if(hash[th2]) return th2;
            th2 = th2->next; 
        }
        return NULL;
    }
};


//  time complexity will be O(n + m) and space O(1)


// Explaination 

// lists
// 1 2 3 4 
// 7 8

// total looped 
// 1 2 3 4 7 8 
// 7 8 1 2 3 4

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        //
        // Any time they collide or reach end together without colliding 
        // then return any one of the pointers.
        //
        if (p1 == p2) return p1;

        //
        // If one of them reaches the end earlier then reuse it 
        // by moving it to the beginning of other list.
        // Once both of them go through reassigning, 
        // they will be equidistant from the collision point.
        //
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
}
/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* h, *r;
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val < l2->val)
         {   h=l1;
         l1=l1->next;
          r=h;
         }
        else
          {  h=l2;
          l2=l2->next;
           r=h;
          }
        
        
    
        while(l1 && l2)
        {
            if(l1->val < l2->val)
             {
                r->next= l1;
            
             l1=l1->next;
             }
            else {r->next=l2;
                 l2=l2->next;
                 }
            r=r->next;
                
        }
        while(l1)
           {
            r->next=l1;
            l1=l1->next;
            r=r->next;
        }
        while(l2)
        {
            r->next=l2;
            l2=l2->next;
            r=r->next;
        }
        
    
    return h;
    }
};

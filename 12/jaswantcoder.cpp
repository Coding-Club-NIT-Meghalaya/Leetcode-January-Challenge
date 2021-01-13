/*
Name: Jaswant Arya
Roll no.: B17CS036
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1)
            return l2;
        if(!l2) return l1;
        
        ListNode* head = l1;
        ListNode* r = NULL;
        int c=0;
        
        while(l1 && l2)
        {
            if(!r)
                r=head;
            else
           { r->next = l1;
            r=r->next;}
         if(c)
         {
             r->val = l1->val+ l2->val + c;
         }
            else
            {
                r->val = l1->val + l2->val;
            }
            if(r->val >9)
            {
                r->val = r->val % 10;
                c=1;
            }
            else c=0;
            
            //r->next =  NULL;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
             r->next = l1;
            r=r->next;
             if(c)
         {
             r->val = l1->val+ c;
         }
            else
            {
                r->val = l1->val ;
            }
             if(r->val >9)
            {
                r->val = r->val % 10;
                c=1;
            }
            else c=0;
            
          //  r->next =  NULL;
            l1=l1->next;
        }
          while(l2)
        {
             r->next = l2;
            r=r->next;
             if(c)
         {
             r->val = l2->val + c;
         }
            else
            {
                r->val = l2->val  ;
            }
              
               if(r->val >9)
            {
                r->val = r->val % 10;
                c=1;
            }
            else c=0;
              
         //   r->next =  NULL;
              l2=l2->next;
        }
        
        if(c)
        {
            r->next = new ListNode(1);
        
        }
        
        
        return head;
        
        
        
        
        
        
    }
};

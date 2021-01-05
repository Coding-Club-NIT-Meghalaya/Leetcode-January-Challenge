/* Name:Debayan Ghosh
   Roll No:B19ME002
   LeetCode Username:_dghosh*/
   class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     
      ListNode* tmp1=nullptr;
        ListNode* tmp2=nullptr;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode* head=nullptr;
        if(l1->val<=l2->val){
            head=l1;
        while(l1->next && l2){                                    
        if(l1->next->val>l2->val){
            tmp1=l1->next;
            tmp2=l2->next;
            l1->next=l2;
            l1=l1->next;
            l2->next=tmp1;
            l2=tmp2;
            
        }
        else l1=l1->next;
        }    
        if(l2)
            l1->next=l2;
        }
        else{
            head=l2;
            while(l2->next && l1){
        if(l2->next->val>l1->val){
            tmp2=l2->next;
            tmp1=l1->next;
            l2->next=l1;
            l2=l2->next;
            l1->next=tmp2;
            l1=tmp1;
            
        }
        else l2=l2->next;
        }    
        if(l1)
            l2->next=l1;
        }
        return head;
    }
};

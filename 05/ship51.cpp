  
/*
Name:  Shivam Pandit
Roll no.:  B19CS013
Leetcode username:  ship51
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (!head)
            return nullptr;
        
        ListNode* temp=head, *prev;
        
        while (temp != nullptr && temp->next!=nullptr){
            if (temp==head && temp->val == temp->next->val){
                
                 while (temp->next!=nullptr && temp->val == temp->next->val){
                     temp=temp->next;
                 }
                 head = temp->next;
            }
            
            else if (temp->val == temp->next->val){
                
                 while (temp->next!=nullptr && temp->val == temp->next->val){
                     temp=temp->next;
                 }
                 prev->next = temp->next;
            }
            else
                prev=temp;
            
            temp=temp->next;
        }   

        return head;     
    }
};

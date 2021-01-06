/*
Name:Dorababu Arigi
Roll:b19cs039
username:DorababuArigi
*/
class Solution {
public:
     ListNode* del(ListNode* head){
         if(head==NULL || head->next==NULL){
             return head;
         }
         if(head->val==head->next->val){
             while(head->val==head->next->val){
                 head=head->next;
                 if(head->next==NULL){
                     return NULL;
                 }
             }
             head=head->next;
              head=del(head);
         }
         else{
         head->next=del(head->next);
         }
         return head;
     }
    ListNode* deleteDuplicates(ListNode* head) {
        return del(head);
        
    }
};

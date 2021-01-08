/* Name:Debayan Ghosh
   Roll No:B19ME002
   LeetCode UserName:_dghosh*/
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
    ListNode* delNode(ListNode* ptr){
        ListNode* temp=ptr;
        ptr=ptr->next;
        delete temp;
        return ptr;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int flag=0;
        
        if(!head||!head->next) return head;
        while(head->next&&(head->val==head->next->val)){
            if(head->next){
              head=delNode(head);
              flag=1;}  
        }
        if(flag) head=delNode(head);
        if(!head||!head->next) return head;
        if(head->val==head->next->val)
           head=deleteDuplicates(head);
        else
           head->next=deleteDuplicates(head->next); 
        return head;
    }
};

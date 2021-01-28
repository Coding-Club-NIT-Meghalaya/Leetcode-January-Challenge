/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
            return nullptr;
        ListNode* res=head;
        ListNode* prev=head;
        head=head->next;
        ListNode* temp=nullptr;
        while(head!=nullptr)
        {
            if(head->val==prev->val)
            {
                while(head!=nullptr&&head->val==prev->val)
                {
                    ListNode* next=head->next;
                    head=head->next;
                    prev->next=next;
                }
                if(prev==res)
                {
                    res=head;
                    prev=res;
                    if(head!=nullptr)
                    head=head->next;
                }
                else
                {
                    temp->next=head;
                    prev=head;
                    if(head!=nullptr)
                    head=head->next;
                }
            }
            else
            {
                temp=prev;
                prev=head;
                head=head->next;
            }
        }
        return res;
    }
};
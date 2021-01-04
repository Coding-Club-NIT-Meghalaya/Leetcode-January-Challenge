/*

Name: Utkarsh Kumar
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        ListNode* root;
        if(l1->val<l2->val)
        {
            ListNode* temp=l1;
            l1=l1->next;
            temp->next=nullptr;
            root=temp;
        }
        else
        {
            ListNode* temp=l2;
            l2=l2->next;
            temp->next=nullptr;
            root=temp;
        }
        ListNode* res=root;
        while(l1!=nullptr&&l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                ListNode* temp=l1;
                l1=l1->next;
                temp->next=nullptr;
                root->next=temp;
            }
            else
            {
                ListNode* temp=l2;
                l2=l2->next;
                temp->next=nullptr; 
                root->next=temp;
            }
            root=root->next;
        }
        if(l1!=nullptr)
            root->next=l1;
        if(l2!=nullptr)
            root->next=l2;
        
        return res;
        
    }
};
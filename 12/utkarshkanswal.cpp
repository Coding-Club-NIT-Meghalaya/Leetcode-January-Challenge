/* Name: Utkarsh Kumar
Roll No:B18EC033
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int r=0;
        ListNode* curr=nullptr;
        ListNode* root=curr;
        int flag=0;
        while(l1!=nullptr&&l2!=nullptr)
        {
            int total=l1->val+l2->val+r;
            int sum=total%10;
            total/=10;
            r=total;
            if(flag==0)
            {
                curr=new ListNode(sum);
                root=curr;
                flag=1;
            }
            else
            {
                curr->next=new ListNode(sum);
                curr=curr->next;
            }
            
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr)
        {
            int total=l1->val+r;
            int sum=total%10;
            total/=10;
            r=total;
            if(flag==0)
            {
                curr=new ListNode(sum);
                root=curr;
                flag=1;
            }
            else
            {
                curr->next=new ListNode(sum);
                 curr=curr->next;
            }
           
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            int total=l2->val+r;
            int sum=total%10;
            total/=10;
            r=total;
             if(flag==0)
            {
                curr=new ListNode(sum);
                 root=curr;
                flag=1;
            }
            else
            {
                curr->next=new ListNode(sum);
                 curr=curr->next;
            }
           
            l2=l2->next;
        }
        if(r>0)
            curr->next=new ListNode(r);
        return root;
    }
};
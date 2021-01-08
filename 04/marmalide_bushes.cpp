/* 
Name : Tanisha Kant
Roll no: B19EC002
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
        ListNode *newhead = nullptr;
        ListNode *sorting = nullptr;
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        if (l1 && l2)
        {
            if (l1 -> val<= l2 -> val)
            {
                sorting = l1;
                l1 = sorting ->next;
            }
            else
            {
                sorting = l2;
                l2 = sorting ->next;
            }
        }
            newhead = sorting;
            while (l1 && l2)
            {
                if (l1 -> val <= l2-> val)
                {
                    sorting -> next = l1;
                    sorting = l1;
                    l1 = sorting -> next;
                }
                else 
                {
                    sorting -> next = l2;
                    sorting = l2;
                    l2 = sorting -> next;
                }
            }
           if (l1 == nullptr)
               sorting -> next = l2;
        if (l2 == nullptr)
               sorting -> next = l1;
        return newhead;
    }
};

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
/*Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int> v;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=nullptr)
            {
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        if(v.size()==0)
            return nullptr;
        sort(v.begin(),v.end());
        ListNode* root=new ListNode(v[0]);
        ListNode* res=root;
        for(int i=1;i<v.size();i++)
        {
            root->next=new ListNode(v[i]);
            root=root->next;
        }
        return res;
    }
};
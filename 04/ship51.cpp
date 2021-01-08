/*
Name:  Shivam Pandit
Roll no.:  B19CS013
Leetcode username:  ship51
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1==nullptr && l2==nullptr)
            return nullptr;
        if (l1==nullptr)
            return l2;
        if (l2==nullptr)
            return l1;
        
        ListNode* x;        
        vector<int> nums;
        for(x=l1 ; x != nullptr; x=x->next) {
            nums.push_back(x->val);
        }
        for(x=l2 ; x != nullptr; x=x->next) {
            nums.push_back(x->val);
        }
        sort(nums.begin(), nums.end());
        ListNode* res = nullptr;
        
        for (int i=nums.size()-1; i>=0; i--){
            ListNode* x = new ListNode(nums[i]);
            if (res==nullptr)
                res=x;
            else
            {
                x->next=res;
                res=x;
            }
        }
        return res;
        
    }
    
};

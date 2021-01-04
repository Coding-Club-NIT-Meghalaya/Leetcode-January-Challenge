"""
Avishek Paul
B19CS038
hawt_sauce
"""

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if not l1 and not l2: return None
        if not l1 and l2: return l2
        if l1 and not l2: return l1
        head = ListNode()
        
        if l1.val < l2.val:
            head = l1
            l1 = l1.next
        else:
            head = l2
            l2 = l2.next
        temp = head
        
        while l1 and l2:
            temp.next = ListNode()
            if l1.val < l2.val:
                temp.next = l1
                l1 = l1.next
            else:
                temp.next = l2
                l2 = l2.next
            temp = temp.next
        
        while l1:
            temp.next = ListNode()
            temp.next = l1
            l1 = l1.next
            temp = temp.next
            
        while l2:
            temp.next = ListNode()
            temp.next = l2
            l2 = l2.next
            temp = temp.next
        
        return head

"""
Avishek Paul
B18CS038
hawt_sauce
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if not head: return None
        temp = head
        d = defaultdict(lambda: 0)
        while temp:
            d[temp.val] += 1
            temp = temp.next
        # for x,y in d.items():
        #     print(f'{x},{y}')
        q = deque([head])
        head2 = ListNode()
        temp2 = head2
        while q:
            temp = q.popleft()
            if d[temp.val] == 1:
                temp2.next = ListNode(temp.val)
                temp2 = temp2.next
            if temp.next:
                q.append(temp.next)
        head2 = head2.next
        return head2

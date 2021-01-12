'''
Avishek Paul
B19CS038
hawt_sauce
'''

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        c = 0
        s = (l1.val + l2.val + c)%10
        if l1.val + l2.val + c > 9:
            c = (l1.val + l2.val + c)//10
        else:
            c = 0
        head = ListNode(s)
        temp = head
        l1 = l1.next 
        l2 = l2.next
        while l1 and l2:
            s = (l1.val + l2.val + c)%10
            if l1.val + l2.val + c > 9:
                c = (l1.val + l2.val + c)//10
            else:
                c = 0
            temp.next = ListNode(s)
            temp = temp.next
            l1 = l1.next 
            l2 = l2.next
            
        while l1:
            s = (l1.val + c)%10
            if l1.val + c > 9:
                c = (l1.val + c)//10
            else:
                c = 0
            temp.next = ListNode(s)
            temp = temp.next
            l1 = l1.next 
        
        while l2:
            s = (l2.val + c)%10
            if l2.val + c > 9:
                c = (l2.val + c)//10
            else:
                c = 0
            temp.next = ListNode(s)
            temp = temp.next
            l2 = l2.next 
        
        if c:
            temp.next = ListNode(c)
            temp = temp.next
            
        return head
            
            
            
            

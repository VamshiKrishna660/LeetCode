# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: ListNode | None) -> ListNode | None:
        if head is None or head.next is None:
            return None

        temp = head
        n = 0
        while temp != None:
            n += 1
            temp = temp.next
        
        n = n//2
        temp = head
        prev = None
        for i in range(n):
            prev = temp
            temp = temp.next

        prev.next = temp.next
        return head      
        

        
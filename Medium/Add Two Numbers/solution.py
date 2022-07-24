# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        result = ListNode()
        curr = result
        val = 0
        
        while (l1 is not None) or (l2 is not None) or (val > 0):
            if l1 is not None:
                val += l1.val
                l1 = l1.next
            
            if l2 is not None:
                val += l2. val
                l2 = l2.next
                
            curr.next = ListNode(val%10)
            curr = curr.next
            val //= 10
            
        return result.next
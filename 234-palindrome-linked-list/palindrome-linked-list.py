# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        slow = fast = head
        temp = None

        while fast and fast.next :
            temp = slow
            slow = slow.next
            fast = fast.next.next
        if temp :
            temp.next = None
        if fast :
            slow = slow.next

        stack = []
        while head :
            stack.append(head.val)
            head = head.next
        while slow :
            if slow.val != stack.pop() :
                return False
            slow = slow.next
        return True

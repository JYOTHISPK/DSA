# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        #first push to github through leetsync extension
        temp = head
        count = 0
        while temp :
            count += 1
            temp = temp.next
        
        if count <= n :
            return head.next
        
        temp = None
        i = 0
        while i < count - n :
            if i == 0 :
                temp = head
            else :
                temp = temp.next
            i += 1
        temp.next = temp.next.next

        return head
        
            
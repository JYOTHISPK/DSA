# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        temp = l1
        count1 = count2 = 0

        while temp :
            count1 +=1
            temp = temp.next

        temp = l2
        while temp :
            count2 +=1
            temp = temp.next

        if count1 >= count2 :
            ans = ptr1 = l1
            ptr2 = l2
        else :
            ans = ptr1 = l2
            ptr2 = l1

        tail = None
        carry = 0
        while ptr1 and ptr2 :
            sum = ptr1.val + ptr2.val + carry
            carry = int(sum // 10)
            ptr1.val = int(sum % 10) 
            tail = ptr1
            ptr1 = ptr1.next
            ptr2 = ptr2.next

        while ptr1 :
                tail = ptr1
                sum = ptr1.val + carry
                carry = int(sum // 10)
                ptr1.val = int(sum % 10)
                ptr1 = ptr1.next 

        new_node = None

        if carry > 0 :
            new_node = ListNode(carry)

        tail.next = new_node

        return ans
        

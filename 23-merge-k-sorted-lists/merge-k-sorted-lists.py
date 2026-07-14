# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def merge(self,list1,list2) :
        dummy = ListNode()
        tail = dummy
        while list1 and list2 :
            if list1.val <= list2.val :
                dummy.next = list1
                dummy = dummy.next
                list1 = list1.next
            else :
                dummy.next = list2
                dummy = dummy.next
                list2 = list2.next
            
        if list1 :
            dummy.next = list1

        if list2 :
            dummy.next = list2
        
        return tail.next

    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists :
            return None
        for i in range (1,len(lists)) :
            lists[i] = self.merge(lists[i-1],lists[i])
        return lists[-1]

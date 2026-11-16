# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        it1, it2 = list1, list2
        dum = ListNode(0)
        res = dum
     
        while (it1 and it2):
            if(it1.val >= it2.val):
                res.next = it2
                it2 = it2.next 
            elif(it1.val < it2.val):
                res.next = it1
                it1 = it1.next
            res = res.next
        if it1:
            res.next = it1
        if it2:
            res.next = it2
        return dum.next
        
        
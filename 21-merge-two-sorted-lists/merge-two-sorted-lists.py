# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next
# class linked_list:
#     def __init__(self):
#         self.head = ListNode()
        
#     def append(self,data):
#         new_node = ListNode(data)
#         cur = self.head
#         while cur.next != None:
#             cur = cur.next
#         cur.next = new_node
        
class Solution:
    def mergeTwoLists(self, list1, list2):
        merged_list = ListNode()
        tail = merged_list
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        
        
        while list1 and list2:
            if list1.val < list2.val:
                tail.next = list1
                list1 = list1.next
            else:
                tail.next = list2
                list2 = list2.next
                
            tail = tail.next
            
        if list1 is not None:
            tail.next = list1
        else:
            tail.next = list2
        
        return merged_list.next
        
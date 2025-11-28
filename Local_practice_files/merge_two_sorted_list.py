# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: [Optional[ListNode]], list2: Optional[ListNode]) -> Optional[ListNode]:
        if len(list1) == 0 or len(list2) == 0:
            return list1
        merged_list = []
        I, j = len(list1), len(list2)
        k = max(I,j)
        l = min(I,j)
        while l > 0:
            for i in range(l):
                if list1[i] <= list2[i]:
                    merged_list.append(list1[i])
                    l -= 1
                else:
                    merged_list.append(list2[i])
                    l -= 1
        i = k-l
        if len(list1) > len(list2):
            while i > 0:
                for j in range(i):
                    merged_list.append(list1[j])
                    i -= 1
        else:
            while i > 0:
                for j in range(i):
                    merged_list.append(list2[j])
                    i -= 1
        return merged_list
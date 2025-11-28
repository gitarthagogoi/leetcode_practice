class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count = 0
        demo = []
        k = len(nums)
        while k > 0:
            count += 1
            if nums[k-1] == val:
                del nums[k-1]
                count -= 1
            k -= 1
        return count
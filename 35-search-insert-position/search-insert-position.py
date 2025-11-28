class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        demo = 0
        for i in range(len(nums)):
            if nums[i]==target:
                return i
        for i in range(len(nums)):
            if nums[i] > target:
                return i
            else:
                demo = i
        return demo+1
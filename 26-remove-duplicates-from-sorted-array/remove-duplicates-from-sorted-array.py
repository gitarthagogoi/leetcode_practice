class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = len(nums)
        i = 0
        while i < k:
            j = 0
            while j < k:
                if i !=j and nums[i] == nums[j]:
                    nums.pop(j)
                    k -= 1
                    j=0
                j += 1
            i += 1
        return k
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        count = 0
        for i in strs.length():
            if strs[i] > count:
                count = strs[i].length()
        
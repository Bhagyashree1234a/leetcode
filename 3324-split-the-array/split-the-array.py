class Solution(object):
    def isPossibleToSplit(self, nums):
        return max(nums.count(x) for x in nums) <= 2
        """
        :type nums: List[int]
        :rtype: bool
        """
        
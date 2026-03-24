class Solution(object):
    def minOperations(self, nums, k):
        s=set()
        for i in range(len(nums)):
            if nums[i]<k:
                return -1
            elif nums[i]>k:
                s.add(nums[i])
        return len(s)

        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        
class Solution(object):
    def minimumOperations(self, nums):
        count =0
        for i in range(len(nums)):
            if nums[i]%3!=0:
                count+=1
        return count
        """
        :type nums: List[int]
        :rtype: int
        """
        
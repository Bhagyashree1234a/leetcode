class Solution(object):
    def differenceOfSum(self, nums):
        sum=0
        s=0
        for i in nums:
            sum+=i
            while i>0:
                d=i%10
                s+=d
                i=i//10
        return sum-s

    
        """
        :type nums: List[int]
        :rtype: int
        """
        
class Solution(object):
    def countDigits(self, n):
        count=0
        num=n
        while(num>0):
            d=num%10
            if(n%d==0):
                count+=1
            num=num//10
        return count
            


        
            
        """
        :type num: int
        :rtype: int
        """
        
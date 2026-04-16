class Solution(object):
    def getEncryptedString(self, s, k):
        n=len(s)
        r=[]
        for i in range (n):
            new=(i+k)%n
            r.append(s[new])
        return "".join(r)
            
            
        
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        
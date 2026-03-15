class Solution(object):
    def mostWordsFound(self, sentences):
        max_of=0
        for i in sentences:
            count=1
            for ch in i:
                if ch==" ":
                    count+=1
            max_of=max(max_of,count)
        return max_of;
    


        


        

        """
        :type sentences: List[str]
        :rtype: int
        """
        
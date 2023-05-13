class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        
        """
        a=''
        for i in digits:
            a=a+str(i)
            
        a=int(a)
        a=a+1
        
        digits=[]
        digits = [int(x) for x in str(a)]
 
        return digits
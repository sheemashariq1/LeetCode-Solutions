class Solution(object):
    def countCommas(self, n):
        """
        :type n: int
        :rtype: int
        """
        count=0
        if (n<1000):
            return count
        for i in range(1000,n+1):
            count=count+1
        return count
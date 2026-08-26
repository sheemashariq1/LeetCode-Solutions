class Solution(object):
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 1:
            return False

        div = 1 
        for i in range(2, num//2+1):
            if num % i == 0:
                div += i

        return div == num
        
class Solution(object):
    def maxSumOfSquares(self, num, sum):
        """
        :type num: int
        :type sum: int
        :rtype: str
        """
        if sum > 9 * num:
            return ""
        res = ""
        for i in range(num):
            if sum >= 9:
                res += "9"
                sum -= 9
            else:
                res += str(sum)
                sum = 0
        if sum > 0:
            return ""
        return res
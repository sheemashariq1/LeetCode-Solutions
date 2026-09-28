class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        binary = bin(num)[2:]
        res = ""
        for i in binary:
            if i == "0":
                res += "1"
            else:
                res += "0"
        return int(res, 2)
        
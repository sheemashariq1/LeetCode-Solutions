class Solution(object):
    def sumDigits(self, n):
        total = 0
        while n > 0:
            total += n % 10
            n //= 10
        return total
    def minElement(self, nums):
        minimum = float('inf')

        for num in nums:
            minimum = min(minimum, self.sumDigits(num))
        return minimum
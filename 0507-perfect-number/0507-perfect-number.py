class Solution(object):
    def checkPerfectNumber(self, num):
        if num<=1:
            return False
        div=1
        for i in range(2,int(math.sqrt(num)+1)):
            if num%i==0:
                div+=i
                if i!=num//i:
                    div+=num//i
        return div==num
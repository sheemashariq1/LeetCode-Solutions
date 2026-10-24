class Solution(object):
    def countDaysTogether(self, arriveAlice, leaveAlice, arriveBob, leaveBob):
        """
        :type arriveAlice: str
        :type leaveAlice: str
        :type arriveBob: str
        :type leaveBob: str
        :rtype: int
        """
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        def convert(date):
            month, day = map(int, date.split('-'))
            return sum(days[:month - 1]) + day

        starting_date = max(convert(arriveAlice), convert(arriveBob))
        ending_date = min(convert(leaveAlice), convert(leaveBob))

        return max(0, ending_date - starting_date + 1)
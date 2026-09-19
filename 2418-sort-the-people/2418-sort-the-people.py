class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        
        people = {}
        for i in range(len(names)):
            people[heights[i]] = names[i]
        
        res = sorted(people)
        j = len(names) - 1      
        sorted_list = []
        while j >= 0 :
            sorted_list.append(people[res[j]])
            j -= 1

        return sorted_list
        

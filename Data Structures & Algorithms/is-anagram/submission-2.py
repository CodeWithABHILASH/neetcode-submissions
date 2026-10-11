class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        from collections import defaultdict
        mp1=defaultdict(int)
        mp2=defaultdict(int)
        for i in s:
            mp1[i]+=1

        for i in t:
            mp2[i]+=1

        if mp1==mp2:
            return True

        return False



        
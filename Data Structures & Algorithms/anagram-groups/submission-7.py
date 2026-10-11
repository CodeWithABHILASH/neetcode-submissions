class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        from collections import defaultdict
        mp=defaultdict(list)

        ans= list()
        for s in strs:
            key = "".join(sorted(s))
            mp[key].append(s)

        for i in mp:
            ans.append(mp[i])

        return ans
        

        
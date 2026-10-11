class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp = dict()
        for i in nums:
            if i in mp:
                return True
            mp[i]=True

        return False
            
            

        
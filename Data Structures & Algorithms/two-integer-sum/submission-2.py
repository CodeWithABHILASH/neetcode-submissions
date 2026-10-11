class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        from collections import defaultdict
        mp= {}
        ans=list()
        for i in range(len(nums)):
            req = target - nums[i]
            if req in mp:
                ans.extend([mp[req],i])
                return ans
            mp[nums[i]] = i 

                 

        
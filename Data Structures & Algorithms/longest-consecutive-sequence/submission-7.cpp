class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()) continue;

            int left = (mp.find(nums[i]-1)!=mp.end())? mp[nums[i]-1] : 0;
            int right = (mp.find(nums[i]+1)!=mp.end())? mp[nums[i]+1] : 0;
            int currlen = left+right+1;
            maxlen=max(maxlen,currlen);
            mp[nums[i]]=currlen;
            mp[nums[i]-left]=currlen;
            mp[nums[i]+right]=currlen;
        }
        return maxlen;
    }
};

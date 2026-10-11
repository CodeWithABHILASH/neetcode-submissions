class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxlen=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()) continue;
            int left = (mp.find(nums[i]-1)!=mp.end())? mp[nums[i]-1] : 0;
            int right = (mp.find(nums[i]+1)!=mp.end())? mp[nums[i]+1] : 0;
            int currlen= left+right+1;
            maxlen= max(currlen,maxlen);
            mp[nums[i]-left]= currlen;
            mp[nums[i]+right]= currlen;
            mp[nums[i]]= currlen;
        }
        return maxlen;
    }
};

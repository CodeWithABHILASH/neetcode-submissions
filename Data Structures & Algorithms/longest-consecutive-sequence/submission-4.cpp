class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=0;
        int currlen=1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1){
                currlen++;
                maxlen=max(currlen, maxlen);
            }else{
                currlen=1;
            }
        }
        return max(currlen, maxlen);
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        int l,r;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) {continue;}
            l=i+1;
            r=n-1;

            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]>0){
                    r--;
                }
                else{
                    l++;
                }
            }
            
        }
        return ans;
    }
};

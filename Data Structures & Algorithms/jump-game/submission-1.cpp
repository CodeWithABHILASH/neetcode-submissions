class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int farthestJump= 0;
        
        for(int i=0;i<n;i++){
            
            if(i>farthestJump){
                return false;
            }
            farthestJump=max(i+nums[i],farthestJump);

            if(farthestJump>=n-1){
            return true;
            }
            
        }
        return false;
    }
};

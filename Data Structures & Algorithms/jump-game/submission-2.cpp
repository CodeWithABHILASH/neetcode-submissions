class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l=0;
        int farthest_jump=0;
        for(int r=0;r<nums.size();r++){
            if(r>farthest_jump) return false;
            farthest_jump=max(farthest_jump,r+nums[r]);
            if(farthest_jump>=nums.size()-1){
                return true;
            }
        }

        return false;
    }
};

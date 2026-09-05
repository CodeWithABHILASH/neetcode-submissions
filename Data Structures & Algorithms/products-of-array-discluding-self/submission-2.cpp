class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        bool hasZero=false;
        int zerocount=0;
        
        int mult=1;
        for (auto i : nums){
            if(i!=0){
                mult= mult*i;
                
            }
            else{
                hasZero=true;
                zerocount++;
            }
        }

        if(zerocount>1){
            vector<int>v1(nums.size(),0);
            return v1;
        }

        for(auto i : nums){
            if(!hasZero){
                ans.push_back(mult/i);
            }else{
                if(i!=0){
                    ans.push_back(0);
                }else{
                    ans.push_back(mult);
                }
            }
        }

        return ans;
        

    }
};

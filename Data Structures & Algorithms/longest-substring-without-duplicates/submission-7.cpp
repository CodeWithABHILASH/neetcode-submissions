class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();

        int l=0;
        int ans=0;
        unordered_map<char,int>mp;
        for(int r=0;r<n;r++){
            char c= s[r];
            if(mp.find(c)!=mp.end()){
                l=max(l,mp[c]+1);
            }
            mp[c]=r;
            ans=max(ans,r-l+1);

        }
        return ans;

    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0;
       int n = s.size();
       int ans=0;
       unordered_map<char,int>mp;
       for(int r=0;r<n;r++){
           
            if(mp.find(s[r])!=mp.end()){
                l=max(l,mp[s[r]]+1);
            }
            ans= max(r-l+1,ans);
            mp[s[r]]=r;
       
       }

       return ans;

    }
};

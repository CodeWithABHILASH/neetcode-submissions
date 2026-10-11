class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0;
       int n = s.size();
       int ans=0;
       unordered_map<char,int>mp;
       for(int r=0;r<n;r++){
           
            while(mp[s[r]]){
                mp[s[l]]--;
                l++;
            }
            ans= max(r-l+1,ans);
            mp[s[r]]++;
       
       }

       return ans;

    }
};

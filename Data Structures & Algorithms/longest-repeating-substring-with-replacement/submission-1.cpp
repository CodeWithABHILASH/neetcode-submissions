class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int n=s.size();
        int max_freq=0;
        int ans=0;
        unordered_map<char,int>mp;
        for(int r=0;r<n;r++){
         char c=s[r];
         mp[c]++;
         max_freq= max(max_freq,mp[c]);
         if((r-l+1)-max_freq>k){
            mp[s[l]]--;
            l++;
         }
        ans = max(ans,r-l+1);
        }

        return ans;
    }
};

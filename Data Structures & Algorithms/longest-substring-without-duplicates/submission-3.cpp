class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int n=s.size();
        if(n==0 || n==1 ) return n;
        int res=0;
        unordered_map<char,int>mp;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            while(mp.find(c)!=mp.end() && mp[c]>=left){
                left=mp[c]+1;
            }
            mp[c]=right;
            res=max(res,right-left+1);
        }

        return res;

    }
};

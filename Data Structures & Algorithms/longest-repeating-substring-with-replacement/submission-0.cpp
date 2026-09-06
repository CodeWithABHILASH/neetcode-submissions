class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxfreq=0;
 
        int result=0;
        unordered_map<char,int>mp;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            mp[c]++;
            maxfreq=max(maxfreq,mp[c]);
    
            while((right-left+1)-maxfreq>k){
                mp[s[left]]--;
                left++;
            }
            result=max(result,right-left+1);

        }
        return result;
    }
};

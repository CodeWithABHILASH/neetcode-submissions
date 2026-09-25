class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        unordered_map<char,int>fqt;
        unordered_map<char,int>fqs;
        for(auto &i:t){
            fqt[i]++;
        }
        pair<int,int>p={0,0};
        int needed = fqt.size();
        int have=0;
        int l=0;
        int ans=INT_MAX;
        for(int r=0;r<s.size();r++){
            char c= s[r];
            fqs[c]++;
            if(fqt.find(c)!=fqt.end() && fqt[c]==fqs[c]){
                have++;
            }

            while(have == needed){
                if(r-l+1<ans){
                    ans=r-l+1;
                    p={l,r};
                }
                fqs[s[l]]--;
               
                if(fqt.find(s[l])!=fqt.end() && fqt[s[l]]>fqs[s[l]]){
                    have--;
                }

                 l++;

            }

        }
        if(ans==INT_MAX) return "";
        return s.substr(p.first,ans);


    }
};

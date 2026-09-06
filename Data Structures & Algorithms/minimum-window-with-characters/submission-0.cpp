class Solution {
public:
    string minWindow(string s, string t) {

    if(t.empty() || t.size()>s.size()) return "";
    unordered_map<char,int>ft;
    unordered_map<char,int>fs;
    int have=0;
    int res=INT_MAX;
    for(auto i:t){
        ft[i]++;
    }
    int req=ft.size();
    int left=0;
    pair<int,int>p={0,0};
    for(int right=0;right<s.size();right++){
        char c=s[right];
        fs[c]++;
        if(ft[c] && ft[c]==fs[c]){
            have++;
        }
        while(have==req){
    
            if(right-left+1<res){
                res=right-left+1;
                p={left,right};
            }
           
            fs[s[left]]--;
            if(ft[s[left]] && fs[s[left]]<ft[s[left]]){
                have--;
            }
            left++;
        }
    }
    if(res==INT_MAX) return "";
    return s.substr(p.first,res);

    }
};

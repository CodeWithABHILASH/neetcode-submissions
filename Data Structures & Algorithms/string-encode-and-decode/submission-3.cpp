class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(auto i:strs){
            int l=i.size();
            enc+=to_string(l)+"#"+i;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int del= s.find("#",i);
            int len= stoi(s.substr(i,del-i));
            string q= s.substr(del+1,len);
            ans.push_back(q);
            i=del+1+len;
        }
        return ans;
    }
};

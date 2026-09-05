class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (const string& str : strs) {
            s += to_string(str.size()) + "#" + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            int delim = s.find('#', i);
            int len = stoi(s.substr(i, delim - i));
            ans.push_back(s.substr(delim + 1, len));
            i = delim + 1 + len;
        }

        return ans;
    }

};
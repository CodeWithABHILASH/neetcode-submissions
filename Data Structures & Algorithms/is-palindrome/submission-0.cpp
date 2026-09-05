class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto i:s){
            if(isalnum(i)){
                s1+=toupper(i);
            }
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());

        return s1==s2;
    }
};

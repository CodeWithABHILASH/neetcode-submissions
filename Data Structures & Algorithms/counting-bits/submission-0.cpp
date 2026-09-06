class Solution {
public:
    int count(int n){
        int ans=0;
        while(n>0){
            n=n&(n-1);
            ans++;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int c=count(i);
            ans.push_back(c);
        }

        return ans;
    }
};

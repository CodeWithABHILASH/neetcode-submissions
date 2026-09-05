class Solution {
public:
    static bool compare(pair<int,int>p1,pair<int,int>p2){
        return p1.second>p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>mp;
        //frequency of list
        for(auto i:nums){
            mp[i]++;
        }

        vector<pair<int,int>>fq;
        for(auto i:mp){
            fq.push_back({i.first,i.second});
        }
        sort(fq.begin(),fq.end(),compare);

        for(int i=0;i<k;i++){
            ans.push_back(fq[i].first);
        }
        
        return ans;

    }
};

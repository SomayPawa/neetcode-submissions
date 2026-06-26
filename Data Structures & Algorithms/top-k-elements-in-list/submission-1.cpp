class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto i:mp){
            cout<<" "<<i.first<<" "<<i.second<<endl;
        }

        vector<pair<int,int>>v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }

        sort(v.begin(),v.end());

        reverse(v.begin(),v.end());

        vector<int>ans;
        int len = v.size();
        int mini = min(len,k);

        for(int i=0;i<mini;i++){
            ans.push_back(v[i].second);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};

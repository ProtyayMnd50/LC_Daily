class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>st;
        for(auto &x:arr)
        st.insert(x);
        unordered_map<int,int>mp;
        int rn=1;
        for(auto &x:st){
            mp[x]=rn;rn++;
        }
        vector<int>ans;
        for(auto &x:arr)
        ans.push_back(mp[x]);

        return ans;
    }
};
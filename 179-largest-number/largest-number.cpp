class Solution {
    #define ll long long
public:

    static bool lolu (int &n1,int &n2){
            string s1=to_string(n1);
            string s2=to_string(n2);
            bool fl=true;
            for(int i=0;i<min(s1.size(),s2.size());i++){
                if(s1[i]!=s2[i]){
                    fl=false;
                    return s1[i]>s2[i];
                }
            }
            string s3=s1+s2;    
            string s4=s2+s1;

            return s3>s4;
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),lolu);
        // for(auto &x:nums)
        // cout<<x<<" ";
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=to_string(nums[i]);
        }
        int zer=count(ans.begin(),ans.end(),'0');
        if(zer==ans.size())return "0";
        return ans;
    }
};
class Solution {
public:
    int solve(int ind,vector<int>&nums,vector<int>&dp){
        if(ind<0)return 0;
        if(ind==0)return nums[0];
        if(dp[ind]!=-1)return dp[ind];
        int pck=nums[ind]+solve(ind-2,nums,dp);
        int np=0+solve(ind-1,nums,dp);
        return dp[ind]=max(pck,np);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(4*1e4+1,-1);
        return solve(n-1,nums,dp);
    }
};
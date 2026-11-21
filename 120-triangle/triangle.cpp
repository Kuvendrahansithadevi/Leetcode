class Solution {
public:
    int solve(int ind,int last,vector<vector<int>>&triangle,vector<vector<int>>&dp,vector<vector<int>>&vis){
        if(ind==triangle.size()-1) return triangle[ind][last];
        if(vis[ind][last]) return dp[ind][last];
        vis[ind][last]=1;
        int pick=triangle[ind][last]+solve(ind+1,last,triangle,dp,vis);
        int nonpick=triangle[ind][last]+solve(ind+1,last+1,triangle,dp,vis);
        return dp[ind][last]=min(pick,nonpick);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        vector<vector<int>>vis(n,vector<int>(n,0));
        return solve(0,0,triangle,dp,vis);
    }
};
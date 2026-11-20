class Solution {
public:
    int solve(vector<int>&nums,int l,int r){
        int prev1=0;
        int prev2=0;
        for(int i=l;i<=r;i++){
            int pick=nums[i]+prev2;
            int nonpick=prev1;
            int curr=max(pick,nonpick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int case1=solve(nums,1,n-1);
        int case2=solve(nums,0,n-2);
        return max(case1,case2);
    }
};
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 0;
        if (nums.size() == 0){
            return 0;
        }
        int dp[nums.size()];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 1; i < nums.size(); i++){
            for (int j = 0; j < i; j++){
                if (nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            dp[i] = max(dp[i], 1);
        }
        for (int i = 0; i < nums.size(); i++){
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
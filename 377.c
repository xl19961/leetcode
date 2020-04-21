    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, 0);
        for(auto j : nums){
            if(j <= target)
                dp[j] = 1;                    
        }
        for(int i = 1; i < target + 1; i++){
            for(int j = 0; j < nums.size(); j++){
                if(i >= nums[j])
                    dp[i]= (dp[i] >= INT_MAX - dp[i - nums[j]]) ? INT_MAX : dp[i] + dp[i - nums[j]];;
            }
            cout << dp[i] << endl;
        }
       return dp.back(); 
    }

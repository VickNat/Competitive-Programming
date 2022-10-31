class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int ahead=i+questions[i][1]+1;
            dp[i] = max(dp[i+1],questions[i][0]+(ahead>n?0:dp[ahead]));
        }
        return dp[0];
    }
};

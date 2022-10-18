class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> counts;
        int j=0, ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            counts.insert(nums[i]);
            while (*counts.rbegin() - *counts.begin() > limit)
                counts.erase(counts.find(nums[j++]));
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};

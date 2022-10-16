class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1;
        int minMaxSum=0;

        while(start<end){
            minMaxSum=max(minMaxSum,nums[start++]+nums[end--]);
        }

        return minMaxSum;
    }
};

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        sort(nums.begin(), nums.end());
        int i=0;
        int j=0;

        for(; i<n && j<n; i++, j+=2){
            ans[j]=nums[i];
        }
        j=1;
        for(; i<n &&j<n; i++, j+=2){
            ans[j]=nums[i];
        }
        return ans;

        //ALTERNATIVELY you can do by swapping
    }
};

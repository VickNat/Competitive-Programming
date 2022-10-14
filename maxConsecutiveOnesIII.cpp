class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxCons=0;
        int start=0;
        int zeroes=0;

        for(int end=0; end<nums.size(); end++){
            //count the consecutive zeroes
            if(nums[end]==0){
                zeroes++;
            }
            //maintain the consecutive zeroes below k value
            while(zeroes>k){
                if(nums[start]==0){
                    zeroes--;
                }
                start++;
            }
            //find the max value
            maxCons=max(maxCons, end-start+1);
        }
        return maxCons;
    }
};

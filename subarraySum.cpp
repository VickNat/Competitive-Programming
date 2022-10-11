class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;

        for(int i=0; i<nums.size(); i++){
            int total=nums[i];

            if(total==k){
                count++;
            }
            
            for(int j=i+1; j<nums.size(); j++){
                total+=nums[j];

                if(total==k){
                    count++;
                }
            }
        }
        return count;
    }
};

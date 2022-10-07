class Solution {
public:
//open loop from 0-size-1
//another loop from i+1-size
//if val[i]==val[j]
//count++
//else continue
//return count
    int numIdenticalPairs(vector<int>& nums) {
        int counts=0;

        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    counts+=1;
                }else
                {
                    continue;
                }
            }
        }return counts;
    }
};

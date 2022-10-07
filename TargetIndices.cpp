class Solution {
public:
//sort the array in increasing order
//use loop if the value at index i is greater than the next value swap the two numbers
//else move on to the next index value
//after sort close loop
//use loop to check if the target is equal to the elements in the array
// if it's equal save the index of the target value onto a new array
// after checking close loop again
//sort the new array in increasing order
//use loop like the previous steps
//close loop
//return the new vector
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int> newVector;
        int temp;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>nums[i+1] && i<nums.size()-1)
            {
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }else
            {
                continue;
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(target==nums[i])
            {
                newVector.push_back(i);
            }else
            {
                continue;
            }
        }

        return newVector;
    }
};

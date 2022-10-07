class Solution {
public:
//loop through each element of the array
//for each element i loop through i count the number of elements less than and not equal to it
//put that count in a separate array temporary array
//once it finishes, return the temporary vector array

//vector is no more than 500 elements
//vector elements are between 0 and 100
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>counts;

        for(int i=0; i<nums.size(); i++){
            counts.push_back(0);
        }
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(nums[i]>nums[j] &&  i!=j){
                    counts[i]+=1;
                }else{
                    continue;
                }
            }
        }
        return counts;
    }
};

//WHY DONT YOU WOOOOOOOOORK

#define pp pair< int , int >

class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        vector<pp> nums;

        for(int i=0; i<pos.size(); i++){
            nums.push_back({pos[i], speed[i]});
        }

        sort(begin(nums), end(nums));

        stack<double> ans;

        for(int i=nums.size()-1; i>=0; i--){
            double time=(target-nums[i].first)/((double)nums[i].second);

            if(ans.empty() || ans.top()<time){
                ans.push(time);
            }
        }

        return ans.size();
    }
};

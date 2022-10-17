class Solution {
public:
    static bool comp(string &a, string &b){
        if(a.size()==b.size())
            return a<b;
        return a.size()<b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), comp);

        int n=nums.size();
        return nums[n-k];
    }
};
/*vector<int> large(nums.size());
        string ans;

        for(int i=0; i<nums.size(); i++){
            large[i]=stoi(nums[i]);
        }
        sort(begin(large), end(large));

        int i=nums.size();
        while(i!=k){
            i--;
        }
        ans=to_string(nums[i]);
        return ans;*/

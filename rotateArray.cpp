class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k >= n)
        {
        k = k%n;
        }

        for(int i=0; i<=(n-k-1)/2; i++)
        {
            swap(nums[i], nums[n-1-k-i]);
        }

        int j=0;
        //from n-k to n
        for(int i=n-k; i<((n-k)+ (n-(n-k))/2); i++)
        {
            swap(nums[i], nums[n-1-j]);
            j++;
        }

        //the whole array
        for(int i=0; i<n/2; i++)
        {
            swap(nums[i], nums[n-1-i]);
        }
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int> leftProd(n);
        vector<int> rightProd(n);

        leftProd[0] = 1;
        for(int i=1; i<nums.size(); i++){
            leftProd[i]=leftProd[i-1]*nums[i-1];
        }

        rightProd[n-1]=1;
        for(int j=n-2; j>=0; j--){
            rightProd[j]=rightProd[j+1] * nums[j+1];
        }

        for(int k=0; k<n; k++){
            ans[k]= leftProd[k]*rightProd[k];
        }

        return ans;
        /*Too long*/
        /*vector<int> ans(nums.size(), 1);

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(j==i){
                    continue;
                }
                ans[i]*=nums[j];
            }
        }
        return ans;*/
        
        /*
        int leftProd=1;
        vector<int> ans(nums.size(), 1);

        for(int i=0; i<nums.size(); i++){
            unsigned int rightProd=1;
            for(int k=i+1; k<=nums.size(); i++){
                rightProd=nums[k]*rightProd;
            }
            ans[i]=leftProd*rightProd;
            leftProd*=nums[i];
        }
        return ans;*/
    }
};

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        unordered_map<int, long> counts;
        int mod=1e9 + 7;

        for(int a: arr) counts[a]++;
        long ans=0;
        for(auto it: counts)
            for(auto it2: counts){
                int i=it.first, j=it2.first, k=target-j-i;
                if(!counts.count(k)) continue;
                if(i==j && j==k){
                    ans+= counts[i]*(counts[i]-1)*(counts[i]-2) / 6;
                }else if(i==j && j!=k){
                    ans+= counts[i]*(counts[i]-1)/2 *counts[k];
                }else if(i<j && j<k){
                    ans+=counts[i]*counts[j]*counts[k];
                }
            }
        return ans%mod;
    }
};

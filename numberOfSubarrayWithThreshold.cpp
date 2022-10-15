class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        /*int counts=0;
        int avg=0;
        int start=0, end=0;

        for(; end<arr.size(); end++){
            if(end-start<k){
                end++;
            }else if(end-start==k){
                for(int i=start; i<=end; i++){
                    avg+=arr[i];
                }
                avg/=k;
                if(avg>=threshold){
                    counts++;
                }
                avg=0;
                end++;
                start+=end;
            }
        }
        return counts;*/
        int count = 0, sum = 0, t = k*threshold;
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if(i >= k) sum -= arr[i-k];
            if(i >= k-1 && sum >= t) count++;
        }
        return count;
    }
};

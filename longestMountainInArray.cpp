class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int maxArr=0;
        for(int i=1; i<n-1; i++){// 1 and n-1 Because it will create buffer overflow if otherwise.
            if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
                int start=i;
                int end=i;
                while(start>0 && arr[start]>arr[start-1]){
                    start--;
                }
                while(end<n-1 && arr[end]>arr[end+1]){
                    end++;
                }
                maxArr=max(maxArr, (end-start+1));
                i=end;
            }
        }
        return maxArr;
    }
};

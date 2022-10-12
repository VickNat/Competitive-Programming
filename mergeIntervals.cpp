class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        //we need to first sort the intervals
        sort(intervals.begin(), intervals.end());
        //now let's iterate through the elements and compare
        for(int i=0; i<intervals.size(); i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int> &v = ans.back();//to access the previous element of the answer
                int y=v[1];//end interval of the previous row

                //compare with the rest
                if(intervals[i][0]<=y){
                    v[1]=max(y, intervals[i][1]);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
/*
a new nested vector for storing the answer
Open a for loop to iterate through the rows of the 2D array
if(merge[i][1]>=merge[i+1][0]){
    ans[i]+=[merge[i][0], merge[i+1][1]];
}
ans[i]=[merge[i][0], merge[i][1]];
close loop
return ans
*/

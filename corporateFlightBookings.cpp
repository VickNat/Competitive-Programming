class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n, 0);

        for(auto &v: bookings){
            ans[v[0] -1]+= v[2];
            if(v[1]<n) ans[v[1]] -= v[2];
        }
        for(auto i=1; i<n; ++i) ans[i] += ans[i-1];

        /*Heap overflow*//*for(int i=0; i<bookings.size(); i++){
            for(int j=bookings[i][0]; j<=bookings[i][1]; j++){
                ans[bookings[i][j]]+=bookings[i][2];
            }
        }*/

        return ans;
    }
};

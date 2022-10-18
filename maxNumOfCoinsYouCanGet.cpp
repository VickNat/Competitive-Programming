class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum=0;
        int j=piles.size()-2;
        int i=0;

        sort(begin(piles), end(piles));
        for(; i<=j; i++){
            sum+=piles[j];
            j-=2;
        }
        return sum;
    }
};

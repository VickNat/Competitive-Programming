class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> count;
        int start=0, end=0;
        for (; end < fruits.size(); ++end) {
            count[fruits[end]]++;
            if (count.size() > 2) {
                if (--count[fruits[start]] == 0)count.erase(fruits[start]);
                start++;
            }
        }
        return end - start;
    }
};

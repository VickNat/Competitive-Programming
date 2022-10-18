class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>answer;
    unordered_map<int,int>m;
	for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
    
    priority_queue<pair<int,int>>pq;
    for(auto x:m)
    {
    pq.push({-x.second,x.first});//work as min heap
    if(pq.size()>k)
        pq.pop();
    }
    
    while(!pq.empty())
    {
        answer.push_back(pq.top().second);
        pq.pop();
    }
    
    return answer;
    }
};

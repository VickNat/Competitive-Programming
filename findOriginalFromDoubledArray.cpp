class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int n=changed.size();

        if(n%2==1) return{};
        sort(changed.begin(), changed.end());

        map<int, int> uMap;
        vector<int> ans;

        for(int i=0; i<n; i++){
            uMap[changed[i]]++;
        }

        for(int i=0; i<n; i++){
            if(uMap[changed[i]]==0) continue;
            if(uMap[changed[i]*2]==0) return {};

            ans.push_back(changed[i]);

            uMap[changed[i]]--;
            uMap[changed[i]*2]--;
        }
        return ans;
    }
};

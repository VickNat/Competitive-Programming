class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> pArr(26, 0);
        vector<int> sArr(26, 0);
        int start=0, end=0;
        int window=p.size();
        int len=s.size();

        if(window>len){
            return {};
        }

        while(end<window){
            pArr[p[end] - 'a']+=1;
            sArr[s[end++] - 'a']+=1;
        }
        end-=1;
        while(end<len){
            if(pArr==sArr){
                ans.push_back(start);
            }
            end++;
            if(end!=len)
                sArr[s[end] - 'a']+=1;
            sArr[s[start] - 'a']-=1;
            start+=1;
        }
        return ans;
    }
};

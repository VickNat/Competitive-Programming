class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> hy;
        string str ;
        int count=0;
        int j=0,i = 0,n = chars.size();
        while(i<n){
            j = i;
            count = 0;
            while(j<n&& chars[i]==chars[j]){
                count+=1;
                j++;
            }
                hy.push_back(chars[i]);
            i = j;
            if(count == 1)continue;
                str = to_string(count);
                for(auto &i: str){
                    hy.push_back(i);
                }
                count=0;
        }
        chars = hy;
        return hy.size();
    }
};

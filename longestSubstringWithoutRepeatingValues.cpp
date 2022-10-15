class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;   //if string of length zero comes simply return 0
        unordered_map<char,int> m;   //create map to store frequency,(get to know all unique characters
        int i=0,j=0,ans=INT_MIN; 
        while(j<s.length())   
        {
            m[s[j]]++;  //increase the frequency of the element as you traverse the string
            if(m.size()==j-i+1)  // whem map size is equal to the window size means suppose window size is 3 and map size is also three that means in map all unique characters are their
            {
                ans = max(ans,j-i+1);  //compare the length of the maximum window size
            }
            else if(m.size()<j-i+1)   //if the map size is less than the window size means there is some duplicate present like window size = 3 and map size = 2 means there is a duplicates
            {
                while(m.size()<j-i+1)  //so till the duplicates are removed completely
                {
                    m[s[i]]--;   //remove the duplicates
                    if(m[s[i]]==0)  //if the frequency becomes zero 
                    {
                        m.erase(s[i]);//delete it completely
                    }
                    i++;  //go for next element 
                }
            }
             j++;  //go for the next element
        }
        return ans;
        /*int start=0;
        int end=0;
        int maxSubStr=0;
        char str[s.length()];

        for(int i=0; i<sizeof(str); i++){
            str[i]=s[i];
        }
        
        for(end=0; end<sizeof(str); end++){
            if(end==0) continue;

            int i=end-1;
            while(i>=0){
                if(str[i]==str[end]){
                    maxSubStr=max(maxSubStr, (end-start));
                    start=end;
                    break;
                }else{
                    i--;
                }
            }
        }
        return maxSubStr;*/
        
    }
};

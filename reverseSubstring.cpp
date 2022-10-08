class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> open;
        string res;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(')
            {
                open.push_back(res.length());
            }else if(s[i]==')')
            {
                int j=open.back();
                open.pop_back();
                reverse(res.begin() + j, res.end());
            }else
            {
                res+=s[i];
            }
        }
        return res;
    }
};

class Solution {
public:

    bool isValid(string s) {
        stack<char> strstack;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                strstack.push(s[i]);
            }else
            {
                if(!strstack.empty()){
                    if(strstack.top()=='(' && s[i]==')')
                    {
                        strstack.pop();
                    }else if(strstack.top()=='[' && s[i]==']')
                    {
                        strstack.pop();
                    }else if(strstack.top()=='{' && s[i]=='}')
                    {
                        strstack.pop();
                    }else{
                        return false;
                    }
                }else
                {
                    return false;
                }
            }
        }
        if(strstack.empty()==1)
        {
            return true;
        }else
        {
            return false;
        }
    }
};

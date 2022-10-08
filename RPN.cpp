class Solution {
//inputs are numbers and operators
//if 
public:
    bool isOperator(string s)
    {
        return (s=="+" || s=="-" || s=="*" || s=="/");
    }
    int evalRPN(vector<string>& tokens) 
    {
        stack<string> oper;
        string first, second;

        if(tokens.size()==1 && !isOperator(tokens[0]))
        {
            return stoi(tokens[0]);
        }
        
        for(auto i=0; i<tokens.size(); i++)
        {
            while(i<tokens.size() && !isOperator(tokens[i]))
            {
                oper.push(tokens[i]);
                i++;
            }
            if(oper.size())
            {
                second=oper.top();
                oper.pop();
            }
            if(oper.size())
            {
                first=oper.top();
                oper.pop();
            }

            //operation
            if(tokens[i]=="+")
            {
                oper.push(to_string(stoll(first)+stoll(second)));
            }
            else if(tokens[i]=="*")
            {
                oper.push(to_string(stoll(first)*stoll(second)));
            }
            else if(tokens[i]=="-")
            {
                oper.push(to_string(stoll(first)-stoll(second)));
            }
            else if(tokens[i]=="/")
            {
                oper.push(to_string(stoll(first)/stoll(second)));
            }
        }
        return stoi(oper.top());
    }
};

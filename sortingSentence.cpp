class Solution {
public:
    string sortSentence(string s) {
       vector<string> pos(10,"");

        for(int i=0; i<s.size(); i++){
            int j=i;
            string temp;
            while(!isdigit(s[j])){
                temp.push_back(s[j]);
                j++;
            }
            //change the encountered string number to digit
            int n=s[j]-'0';
            pos[n]+=temp;
            i=j+1;
        }
        string ans;
        //add the value to a string and return the string
        for(int i=1; i<10; i++){
            if(pos[i].length()>0){
                ans+=pos[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        
        return ans;
    }
};

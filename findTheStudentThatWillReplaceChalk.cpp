class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        size_t sum=0;

        for(auto &i: chalk){
            sum+=i;
        }

        k=k%sum;

        for(int i=0; i<chalk.size(); i++){
            if(k-chalk[i]<0)
                return i;
            else
                k-=chalk[i];
        }
        
        return chalk.size()-1;
        /*Too Long*/
        /*while(chalk[i]<=k){
            if(i!=chalk.size()-1){
                k-=chalk[i];
                i++;
            }
            else if(i==chalk.size()-1){
                k-=chalk[i];
                i=0;
            }
        }
        */
    }
};

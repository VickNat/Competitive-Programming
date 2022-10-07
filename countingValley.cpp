#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

//declare a valley traversed variable
//separate each string to individual characters
//declare int n=str.length()
//for(int i=0; i<n; i++){str[i]}
//count the amount of valleys
//for(int i=0; i<n; i++)
//if(path=="U") valley+=1
//nested if(valley==0)count++
//nested else if(valley!=0)continue
//else if(path=="D"&&valley!=1) valley-=1
//nested if(valley==0)count++
//nested else if(valley!=0)continue
//else break;
int countingValleys(int steps, string path) {
    int valley=0;
    int counts=0, n=path.length();
    
    for(int i=0; i<n; i++)
    {
        if(path[i]=='U')
        {
            valley+=1;
            if(valley==0 && i!=0)
            {
                counts+=1;
            }else{continue;}
        }else if(path[i]=='D')
        {
            valley-=1;
            
        }
    }return counts;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {

    if(s=="12:00:00AM")
      return "00:00:00";

    else if(s=="12:00:00PM")
      return "12:00:00";

    string str;
    int val = s[0]-'0';
       val *= 10;
       val += s[1] - '0';

    if(s[s.length()-2]=='P'){
       if(val>=1 && val<12){
       val+= 12;
       str.insert(0,to_string(val));
       for(int i=2;i<s.length()-2;i++){
           str.push_back(s[i]);
         }
       }
       else{
        str.insert(0,to_string(val));
       for(int i=2;i<s.length()-2;i++){
           str.push_back(s[i]);
         }
       }
    }
    else{

        if(val>=1 && val<12){
        for(int i=0;i<s.length()-2;i++){
            str.push_back(s[i]);
        }
        }
        else{
            str.push_back('0');
            str.push_back('0');
             for(int i=2;i<s.length()-2;i++){
            str.push_back(s[i]);
        }
        }
    }

    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

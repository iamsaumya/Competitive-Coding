#include <bits/stdc++.h>

using namespace std;
string numbers = "0123456789";
string lower_case = "abcdefghijklmnopqrstuvwxyz";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string special_characters = "!@#$%^&*()-+";

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong
    bool num = false;
    bool lc = false;
    bool uc = false;
    bool sc = false;

    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90)
             uc = true;
        else if(s[i]>=97 && s[i]<=122)
             lc = true;
        else if(s[i]>=48 && s[i]<=57 )
             num = true;
        else  {
             sc = true;
              }
    }

    int c = 0;
    if(num==false)
         c++;
    if(lc==false)
         c++;
     if(uc==false)
         c++;
     if(sc==false)
         c++;
    return max(c,6-n);
}

//Hackerrank shit.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

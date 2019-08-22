#include <bits/stdc++.h>

using namespace std;
#define hashmap unordered_map<char,node*>
class node{
    public:
    string data;
    hashmap h;
    bool isTerminal;
    int numberoftimes;
    node(char d){
       data = d;
       numberoftimes = 0;
       isTerminal = false;
    }
};

class Trie{
   node *root;
   public:
   Trie(){
       root = new node('\0');
   }

   void addWord(string word){
       node *temp = root;
       for(int i=0;i<word.length();i++){
           char ch = word[i];
           if(temp->h.count(ch)==0){
              node* child = new node(ch);
              temp->h[ch] = child;
              temp = child;
           }
           else{
               temp = temp->h[ch];
           }
       }
       temp->numberoftimes += 1;
       temp->isTerminal = true;
   }

   int search(string word){
       node* temp = root;
       for(int i=0;i<word.length();i++){
           char ch = word[i];
           if(temp->h.count(ch)){
               temp = temp->h[ch];
           }
           else
             return 0;
       }
       return temp->numberoftimes;
   }
};

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
     Trie t;
     for(int i=0;i<strings.size();i++)
           t.addWord(strings[i]);
     vector<int>count(queries.size(),0);

     for(int i=0;i<queries.size();i++){
        int ans = t.search(queries[i]);
        count[i] += ans;
     }

     return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

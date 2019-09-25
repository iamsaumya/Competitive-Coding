#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	string s1 = "WUB";
	cin>>s;
	vector<string>ans1;
	string ans;
	for (unsigned int i = 0;i < s.length();i++) {
		if (s1 == s.substr(i, 3)) {
			i += 2;
			if(!ans.empty())
			ans1.push_back(ans);
			ans.clear();
		}
		else
		{
			ans += s[i];
		}
	}

	ans1.push_back(ans);
	for (auto x : ans1) cout << x <<" ";
	return  0;
}

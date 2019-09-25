#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int>mp;

	for (int i = 0;i < n;i++) {
		string ch;
		cin >> ch;
		++mp[ch];
	}
	int best = -1;
	string ans;

	for (auto x : mp) {
		if (x.second > best) {
			best = x.second;
			ans = x.first;
		}
	}
	cout << ans << endl;
}
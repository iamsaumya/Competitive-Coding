#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch;
	cin >> ch;
	string input;
	cin >> input;

	if (ch == 'R') {
		string ans;
		for (int i = 0;i < input.length();i++) {
			 auto it = s.find(input[i]);
			 ans += s[it -	1];
		}
		cout << ans << endl;
	}
	else {
		string ans;
		for (int i = 0;i < input.length();i++) {
			auto it = s.find(input[i]);
			ans += s[it + 1];
		}
		cout << ans << endl;
	}
}
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	string s, s1;
	cin >> s >> s1;
	int j = s1.length();
	j = j - 1;
	for (int i = 0;i < s1.length();i++) {
		if (s1[i] != s[j]) {
			cout << "NO" << endl;
			return 0;
		}
		j--;
	}
	cout << "YES" << endl;
	return 0;
}
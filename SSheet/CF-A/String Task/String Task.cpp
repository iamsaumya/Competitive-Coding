#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string s;
	cin >> s;
	string s1;
	for (int i = 0;i < s.length();i++) {
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'E' || s[i] == 'e' || s[i] == 'u' || s[i] == 'U' || s[i] == 'I' || s[i] == 'i') {
			continue;
		}
		else {
			s1 += ".";
			if (65 <= s[i] && s[i] <= 90) {
				s1 += (s[i] + 32);
			}
			else {
				s1 += s[i];
			}
		}
	}
	cout << s1 << endl;
	return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;
	int ones = 0;
	int zeros = 0;
	for (int i = 0;i < n;i++) {
		if (s[i] == '0') {
			zeros++;
		}
		else
			ones++;
	}
	cout << abs(zeros - ones) << endl;
}
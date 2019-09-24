#include<iostream>

using namespace std;


int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int arr[123] = { 0 };
	for (int i = 0;i < n;i++) {
		arr[s[i]]++;
	}

	for (int i = 65 ;i < 91;i++) {
		if (arr[i] == 0 && arr[i + 32] == 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
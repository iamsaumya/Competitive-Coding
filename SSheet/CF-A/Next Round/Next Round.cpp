#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int>vec(n);
	for (int i = 0;i < n;i++) cin >> vec[i];

	int val = vec[k - 1];

	if (val == 0) {
		int ans = 0;
		for (auto x : vec) {
			if (x > val)
				ans++;
		}
		cout << ans << endl;
	}
	else {
		int ans = 0;
		for (int i = 0;i < n;i++) {
			if (vec[i] >= val)
				ans++;
		}
		cout << ans << endl;
	}
}
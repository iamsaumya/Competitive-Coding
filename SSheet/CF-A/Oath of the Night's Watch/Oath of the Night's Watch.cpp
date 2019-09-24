#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>vec(n);
	for (int i = 0;i < n;i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	if (n <= 2)
		cout << 0 << endl;
	else {
		int less = vec[0];
		int large = vec[n - 1];
		int ans = 0;
		for (int i = 1;i < n - 1;i++) {
			if (vec[i] > less && vec[i] < large) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}

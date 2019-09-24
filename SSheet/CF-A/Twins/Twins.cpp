#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	int sum = 0;
	vector<int>vec(n);
	for (int i = 0;i < n;i++) {
		cin >> vec[i]; sum += vec[i];
	}

	sort(vec.begin(), vec.end());

	int sum1 = 0;
	for (int i = n - 1;i >= 0;--i) {
		sum1 += vec[i];
		sum -= vec[i];
		if (sum1 > sum) {
			cout << n - i << endl;
			break;
		}
	}
     

}
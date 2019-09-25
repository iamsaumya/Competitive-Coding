#include<iostream>
#include<vector>
using namespace std;

int n;
int t;

int main() {
	
	cin >> n >> t;

	if (t == 10) {
		if (n < 2) {
			cout << -1 << endl;
		}
		else {
			for (int i = 0;i < n-1;i++) {
				cout << 1;
			}
			cout << 0 << endl;
		}
	}
	else {
		for (int i = 0;i < n;i++) cout << t;
		cout << endl;
	}
	return 0;

}
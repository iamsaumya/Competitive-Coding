#include<iostream>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	if (n == 1) {
		cout << -1 << endl;
		return 0;
	}

	if (n & 1) {
		cout << (-n + (n / 2));
	}
	else
		cout << n / 2;
	return  0;
}
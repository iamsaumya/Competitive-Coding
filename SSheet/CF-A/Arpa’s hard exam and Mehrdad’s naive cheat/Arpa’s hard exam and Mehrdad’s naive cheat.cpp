#include<iostream>

using namespace std;

int main() {
	int arr[4] = {8,4,2,6};
	int n;
	cin >> n;
	if (n == 0) {
		cout << 1 << endl;
		return 0;
	}
	n--;
	n = n % 4;
	cout << arr[n];
	return 0;
}
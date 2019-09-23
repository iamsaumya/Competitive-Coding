#include<iostream>
using namespace std;
int main() {

	int arr[101];
	int arr1[101];

	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> arr[i];

	for (int i = 1;i <= n;i++) {
		arr1[arr[i]] = i;
	}

	for (int i = 1;i <= n;i++) cout << arr1[i] << " ";
}

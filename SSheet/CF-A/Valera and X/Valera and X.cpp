#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	char arr[300][300];

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> arr[i][j];
		}
	}

	//diagonal
	char cha = arr[0][0];
	char cha1 = arr[1][0];

	if (cha == cha1) {
		cout << "NO" << endl;
		return  0;
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i == j || i + j == n - 1) {
				if (cha != arr[i][j]) {
					cout << "NO" << endl;
					return 0;
				}
			}
			else {
				if (cha1 != arr[i][j]) {
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;

	return  0;
	
}
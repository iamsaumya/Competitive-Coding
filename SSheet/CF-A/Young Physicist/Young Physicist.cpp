#include<iostream>

using namespace std;

int main() {
	int n;
	int xsum = 0;
	int ysum = 0;
	int zsum = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int x, y, z;
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}

	if (xsum == 0 && ysum == 0 && zsum == 0) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

}
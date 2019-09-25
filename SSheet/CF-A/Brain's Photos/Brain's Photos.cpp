#include<iostream>
#include<string>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char ch;
	bool colored = false;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> ch;
			if (ch == 'C' || ch == 'Y' || ch == 'M')
				colored = true;
		}
	}

	if (colored) cout << "#Color" << endl;
	else cout << "#Black&White";
}
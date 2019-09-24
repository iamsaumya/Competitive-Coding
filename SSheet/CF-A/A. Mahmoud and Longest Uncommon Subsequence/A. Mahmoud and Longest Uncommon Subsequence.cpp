#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s, s1;
	cin >> s >> s1;
	
	int l1 = s.length();
	int l2 = s1.length();

	if (l1 != l2) {
		cout << max(l1, l2)<<endl;
	}

	else if (s == s1) {
		cout << -1 << endl;
	}
	else
		cout << l1 << endl;
	
}
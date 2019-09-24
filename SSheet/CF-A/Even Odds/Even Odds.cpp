#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;

int main() {
	ll n;
	ll k;
	cin >> n >> k;

	ll no_of_odds;

	if (n & 1) {
		no_of_odds = n / 2 + 1;
	}
	else {
		 no_of_odds = n / 2;
	}
    
	if (k <= no_of_odds) {
		cout << 2 * k - 1 << endl;
	}
	else {
		k = k - no_of_odds;
		cout << 2 * k << endl;
	}

}
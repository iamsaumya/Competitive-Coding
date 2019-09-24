#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int P;
	cin >> P;
	int arr[101] = { 0 };

	vector<int>X(P);
	for (int i = 0;i < P;i++) { cin >> X[i]; arr[X[i]]++; }
	cin >> P;
	vector<int>Y(P);
	for (int i = 0;i < P;i++) { cin >> Y[i]; arr[Y[i]]++; }
	for(int i = 1;i <= n;i++) {
		if (arr[i] == 0) {
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;

	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

int arr[100001] = { 0 };

int distance(int a, int b) {

	if (a < 0 && b < 0) {
		return abs(abs(a) - abs(b));
	}
	if (a >= 0 && b >= 0) {
		return abs(a - b);
	}

	if(a<0 && b>=0 || a>=0 && b<0)
		return (abs(a) + abs(b));
	
}

int main() {
	int n;
	std::cin >> n;
	for (int i = 0;i < n;i++) std::cin >> arr[i];

	std::cout << distance(arr[0], arr[1]) <<" "<< distance(arr[0], arr[n - 1])<<endl;

	for (int i = 1;i < n-1;i++) {
		std::cout << min(distance(arr[i], arr[i - 1]), distance(arr[i], arr[i + 1])) << " " << max(distance(arr[i], arr[0]), distance(arr[i], arr[n - 1]))<<endl;
	}
	cout << distance(arr[n - 1], arr[n - 2]) << " " << distance(arr[n - 1], arr[0]) << endl;

}
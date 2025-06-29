#include<iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cout << "Enter n" << endl;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum = sum + i;

	}
	cout << sum << endl;
	return 0;
}
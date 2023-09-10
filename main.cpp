#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int s = (a + b + c) / 2;

	int m = s - c;
	int n = s - a;
	int o = s - b;

	if ((m + o != a) || (m + n != b) || (o + n != c) || m < 0 || n < 0 || o < 0) {
		cout << "Impossible";
		return 0;
	} 

	cout << m << ' ' << n << ' ' << o;
}

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b ||
		b == c ||
		c == a) {
		cout << "S";

		return 0;
	}

	if (a + b == c ||
		b + c == a ||
		c + a == b) {
		cout << "S";

		return 0;
	}

	cout << "N";

	return 0;
}
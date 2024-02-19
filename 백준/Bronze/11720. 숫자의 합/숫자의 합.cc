#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string str;
	cin >> n;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += str[i] - '0';
	}
	cout << sum;
}
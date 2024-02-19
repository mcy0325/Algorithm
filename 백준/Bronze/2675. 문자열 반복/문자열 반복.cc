#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, r;
	string str;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> r;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < r; k++) {
				cout << str[j];
			}
		}
		cout << "\n";
	}
}
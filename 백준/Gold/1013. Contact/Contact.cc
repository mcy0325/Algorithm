#include <iostream>
#include <string>
#include <regex>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		regex pattern("(100+1+|01)+");
		cout << (regex_match(str, pattern) ? "YES\n" : "NO\n");
	}
}
#include <iostream>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int res = 1;
	string str;
	getline(cin, str);

	if (str[0] == ' ') {
		res--;
	}

	if (str[str.length() - 1] == ' ') {
		res--;
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			res++;
		}
	}

	cout << res;
}
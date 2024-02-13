#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> tmp;
vector<char> password;
int L, C;
int v, c;

void searchPassword(int start, int cnt) {
	if (cnt == L) {
		v = 0;
		c = 0;
		for (int i = 0; i < password.size(); i++) {
			if (password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u') {
				v++;
			}
			else {
				c++;
			}
		}
		if (v >= 1 && c >= 2) {
			for (int i = 0; i < password.size(); i++) {
				cout << password[i];
			}
			cout << "\n";
		}
	}

	for (int i = start; i < tmp.size(); i++) {
		password.push_back(tmp[i]);
		searchPassword(i + 1, cnt + 1);
		password.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		char cha;
		cin >> cha;
		tmp.push_back(cha);
	}

	sort(tmp.begin(), tmp.end());
	searchPassword(0, 0);
}
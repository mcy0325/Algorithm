#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "Algorithm") {
			cout << "204" << endl;
		}
		else if (s == "DataAnalysis") {
			cout << "207" << endl;
		}
		else if (s == "ArtificialIntelligence") {
			cout << "302" << endl;
		}
		else if (s == "CyberSecurity") {
			cout << "B101" << endl;
		}
		else if (s == "Network") {
			cout << "303" << endl;
		}
		else if (s == "Startup") {
			cout << "501" << endl;
		}
		else if (s == "TestStrategy") {
			cout << "105" << endl;
		}
	}

	return 0;
}
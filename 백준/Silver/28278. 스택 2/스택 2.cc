#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    stack<int> arr;

    string s;
    int num;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s == "1") {
            cin >> num;
            arr.push(num);
        }

        else if (s == "2") {
            if (arr.size() == 0) {
                ans = -1;
                cout << ans << "\n";
            }
            else {
                ans = arr.top();
                cout << ans << "\n";
                arr.pop();
            }
        }

        else if (s == "3") {
            cout << arr.size() << "\n";
        }

        else if (s == "4") {
            if (arr.size() == 0) {
                ans = 1;
                cout << ans << "\n";
            }
            else {
                ans = 0;
                cout << ans << "\n";
            }
        }

        else if (s == "5") {
            if (arr.size() == 0) {
                ans = -1;
                cout << ans << "\n";
            }
            else {
                ans = arr.top();
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
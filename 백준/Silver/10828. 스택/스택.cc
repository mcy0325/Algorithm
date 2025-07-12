#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> arr;

    string s;
    int num;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s == "push") {
            cin >> num;
            arr.push(num);
        }

        else if (s == "pop") {
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

        else if (s == "size") {
            cout << arr.size() << "\n";
        }

        else if (s == "empty") {
            if (arr.size() == 0) {
                ans = 1;
                cout << ans << "\n";
            }
            else {
                ans = 0;
                cout << ans << "\n";
            }
        }

        else if (s == "top") {
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
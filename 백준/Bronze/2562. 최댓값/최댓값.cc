#include <iostream>
#include <string>
using namespace std;

int main() {
    int num[9] = {};
    int temp = 0;
    int ans = 0;

    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        if (i == 0) {
            temp = num[0];
            continue;
        }
        else {
            if (temp > num[i]) {
                continue;
            }
            else {
                temp = num[i];
                ans = i;
            }
        }
    }

    cout << temp << "\n" << ans+1;

}
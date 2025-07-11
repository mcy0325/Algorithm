#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    string input;

    cin >> a >> input;

    int sum = 0;

    for (int i = 0; i < a; i++) {
        sum += input[i] - '0';
    }

    cout << sum;

    return 0;
}
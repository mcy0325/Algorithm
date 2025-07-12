#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) { return a; }
    return gcd(b, a % b);
}

int main() {
    int n, a, b, c, g;
    cin >> n;

    if (n == 2) {
        cin >> a >> b;
        g = gcd(a, b);
        for (int i = 1; i <= g; i++) {
            if (g % i == 0) {
                cout << i << '\n';
            }
        }
    }
    else {
        cin >> a >> b >> c;
        g = gcd(a, gcd(b, c));
        for (int i = 1; i <= g; i++) {
            if (g % i == 0) {
                cout << i << '\n';
            }
        }
    }
    
    return 0;

}
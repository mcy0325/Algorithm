#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ans = 0;
    
    for(int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        ans += pow(a, 2);
    }
    
    cout << ans%10;
    
    return 0;
}
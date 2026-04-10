#include <iostream>
using namespace std;

int reverseInt(int x) {
    int rev = 0;
    while (x != 0) {
        int lastDigit = x % 10;
        x /= 10;
        rev = rev * 10 + lastDigit;
    }
    return rev;
}

int main() {
    int x;
    if (!(std::cin >> x)) {
        return 0;
    }
    cout << reverseInt(x);
    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rev = 0;

    while(n > 0) {
        int digit = n % 10;   // last digit
        rev = rev * 10 + digit; // build reverse
        n = n / 10;          // remove last digit
    }

    cout << "Reversed number: " << rev;

    return 0;
}

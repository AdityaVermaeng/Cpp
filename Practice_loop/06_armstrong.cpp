#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, rem;
    int sum = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum += pow(rem, 3);
        n /= 10;
    }

    if (sum == temp)
        cout << " Given no is Armstrong Number";
    else
        cout << " Give no is Not Armstrong";

    return 0;
}

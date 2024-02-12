#include <iostream>
#include <cmath>
using namespace std;

long long int largestPrimeFactor(long long int n) {
    long long int largestFactor = -1;
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    for (long long int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestFactor = n;
    }
    return largestFactor;
}

int main() {
    long long int n;
    cout << "Enter a number: ";
    cin >> n;
    long long int result = largestPrimeFactor(n);
    cout << "Largest prime factor of " << n << " is: " << result << endl;
    return 0;
}

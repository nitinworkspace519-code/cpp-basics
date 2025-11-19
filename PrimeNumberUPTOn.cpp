#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask user for a range to find all prime numbers within it
    cout << "Enter a number to list all prime numbers up to it: ";
    cin >> num;

    cout << "Prime numbers up to " << num << " are:\n";

    bool isprime = true;

    // Loop through every number from 2 to 'num'
    for (int n = 2; n <= num; n++) {

        isprime = true; // assume n is prime before checking

        // Check if n is divisible by any number from 2 to n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isprime = false;  // If divisible, it is not a prime
                break;            // No need to check further
            }
        }

        // If still prime, print it
        if (isprime) {
            cout << n << " ";
        }
    }

    return 0;
}

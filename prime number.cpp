#include <iostream>
// Including standard input-output and vector libraries
#include <vector>
using namespace std;

// Function to generate prime numbers up to a given limit using the Sieve of Eratosthenes
void generatePrimes(int limit) {
// Sieve of Eratosthenes is an ancient algorithm used to find all prime numbers up to a given limit
	if (limit < 2) {
        cout << "No prime numbers available up to " << limit << "." << endl;
        return;
    }
    
    vector<bool> isPrime(limit + 1, true); // Initialize a boolean vector
    // Initialize a boolean vector isPrime to mark prime numbers. Initially, assume all numbers are prime
    isPrime[0] = isPrime[1] = false;       // 0 and 1 are not prime numbers
    // 0 and 1 are not prime numbers, so mark them as false

    // Mark non-prime numbers
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    // Loop through numbers and mark non-primes. If a number is prime, mark all its multiples as non-prime
    
    // Display prime numbers
    cout << "Prime numbers up to " << limit << ":" << endl;
    // After marking non-primes, display the remaining prime numbers
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
// Main function to handle user input and invoke the generatePrimes function
	int limit;
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;
    generatePrimes(limit);
    return 0;
}








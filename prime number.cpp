#include <iostream>
#include <vector>
using namespace std;

// Function to generate prime numbers up to a given limit using the Sieve of Eratosthenes
void generatePrimes(int limit) {
	if (limit < 2) {
        cout << "No prime numbers available up to " << limit << "." << endl;
        return;
    }
    
    vector<bool> isPrime(limit + 1, true); // Initialize a boolean vector
    isPrime[0] = isPrime[1] = false;       // 0 and 1 are not prime numbers


    // Mark non-prime numbers
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    // Display prime numbers
    cout << "Prime numbers up to " << limit << ":" << endl;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
	int limit;
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;






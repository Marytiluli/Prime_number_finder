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



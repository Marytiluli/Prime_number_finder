#include <iostream>
#include <vector>
using namespace std;

// Function to generate prime numbers up to a given limit using the Sieve of Eratosthenes
void generatePrimes(int limit) {
	    if (limit < 2) {
        cout << "No prime numbers available up to " << limit << "." << endl;
        return;
    }


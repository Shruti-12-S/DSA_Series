#include<iostream>
#include<cmath> // for sqrt()
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    printPrime(10);
    return 0;
}

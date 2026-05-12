#include <iostream>
using namespace std;

void primeornot(int num)
{
    bool isPrime = true;

    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
}

int main()
{
    primeornot(15);
    return 0;
}
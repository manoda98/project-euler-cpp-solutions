#include <iostream>
using namespace std;

bool isPrime(long long number);
long long calSumOfPrime(long long number);

int main ()
{

    cout << "Sum of primes: " << calSumOfPrime(2000000) << endl;
    return 0;

}

bool isPrime(long long number)
{
    if (number < 2)
    {
        return false;
    }

    for (long long i = 2; i*i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

long long calSumOfPrime(long long number)
{
    long long sum = 0;

    for (long long i = 2; i < number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            //cout << "sum of each iteration: " << sum << endl;
        }
        
    }
    
    return sum;
}
#include <iostream>
#include <cmath>

using namespace std;

long largestPrimeFactor(long n);

int main()
{
    cout << "Largest prime factor is : " << largestPrimeFactor(600851475143) << endl;
    return 0;
}

long largestPrimeFactor(long n) 
{
    long factor = 2;
    long lastFactor = 1;

    while (n > 1)
    {
        if(n % factor == 0)
        {
            lastFactor = factor;
            n = n / factor;

            while (n % factor == 0)
            {
                n = n / factor;
            }
        }
        factor = factor + 1;
    }
    return lastFactor;  
}
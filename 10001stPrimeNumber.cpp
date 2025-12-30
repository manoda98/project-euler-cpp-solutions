#include<iostream>

using namespace std;

bool isPrime(int number);

int main()
{
    int n = 1;
    int count = 0;

    while (count < 10001)
    {
        n++;
        if (isPrime(n))
            {
                count++;
            }
    }
    
    cout << "prime number is: " << n << endl;
    return 0;
}

bool isPrime(int number)
{
    if (number < 2)
        return false;
    
    for (int i = 2; i*i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true; 
}
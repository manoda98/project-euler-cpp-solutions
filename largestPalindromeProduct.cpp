#include <iostream>
#include <cmath>
using namespace std;

int largestPalindrome(int digit);
bool isPalindrome(int number);

int main()
{
    cout << "All Products : " << largestPalindrome(3) << endl;
    return 0;
}

bool isPalindrome(int number) 
{
    int originalNumber = number;
    int reverseNumber = 0;
    
    while (number > 0)
    {
        reverseNumber = reverseNumber * 10 + number % 10;
        number = number / 10;
    }
    return reverseNumber == originalNumber;
}

int largestPalindrome(int digit)
{
    int maxPalindrome = 0;

    for(int i = pow(10,digit) - 1; i > pow(10,digit-1); i--) 
    {
        //cout << i << endl;
        for(int j = pow(10,digit) - 1; j > pow(10,digit-1); j--)
        {
            int product = i * j;

            if (maxPalindrome < product && isPalindrome(product))
            {
                maxPalindrome = product;
            }
            
            
        }
        
    }
    return maxPalindrome;
}

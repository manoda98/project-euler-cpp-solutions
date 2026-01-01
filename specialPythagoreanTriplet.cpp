#include <iostream>

using namespace std;

int findPythagoreanTriplet ();

int main ()
{
    for (int a = 1; a < 1000; a++)
    {
        for (int b = a + 1; b < 1000; b++)
        {
            int c = 1000 - a - b;

            if (c > b && (a*a) + (b*b) == (c*c))
            {
                cout << "a : " << a << "\n"<< "b : " << b << "\n"<< "c : " << c << endl;
                cout << "product : " << a*b*c<< endl;
            }
            
        }
        
    }
    
    return 0;
}


#include<iostream>
using namespace std;


int main(){
    int f1 = 1;
    int f2 = 2;
    int sum = 0;
    
    while(f2 <= 4000000) {
        if(f2 % 2 == 0){
            sum += f2;
        }

        int nextFib = f1 + f2;
        f1 = f2;
        f2 = nextFib;
    }

    cout << "Sum of even fibonacci numbers: " << sum << endl;

    return 0;
}



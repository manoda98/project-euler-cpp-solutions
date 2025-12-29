#include<iostream>
#include<cmath>
#include <chrono>

using namespace std;

bool isprime(long number);
long maxPrime(long number);

int main() {

    cout << maxPrime(600851475143) << endl;
    //cout << maxPrime(123456) << endl;
    //cout << maxPrime(13195) << endl;
    return 0;
}

bool isprime(long number){
    cout << "Checking for prime : " << number << endl;
    if(number < 2){
        return false;
    }
    for(long i = 2; i*i <= number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

long maxPrime(long number){
    
    long largest = 2;

    auto start = chrono::high_resolution_clock::now();

    for(long i = 1; i <= number/2; i = i+2){
        if(number % i == 0 && isprime(i)){
            largest = i;
        }
    }


    // for(long i = number/2; i >= 2; i--){
    //     if(number % i == 0 && isprime(i)) {
    //         largest = i;
    //         break;
    //     }
    // }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> elapsed_ms = end - start;
    cout << "Elapsed time: " << elapsed_ms.count() << " ms" << std::endl;
    return largest;

}
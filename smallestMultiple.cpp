#include<iostream>
#include<cmath>
using namespace std;

// bool isPrime(int number);
// long smallestMultiple(int number);
// int main(){
    
//     cout << smallestMultiple(20) << endl;
//     return 0;
// }

// bool isPrime(int number){
//     if(number < 2){
//         return false;
//     }
//     for (int i = 2; i * i <= number; i++){
//         if (number % i == 0) 
//          return false;
//     }     
//     return true;
// }

// long smallestMultiple(int number){
//     long ans = 1;

//     for (int j = 2; j <= number; j++){
//         if(isPrime(j)){
//             long power = j;
//             while(power * j <= number){
//                 power *= j;
//             }
//             ans *= power;
//         }
//     }
//     return ans;
// }

long gcd(long a, long b);
long lcm(long a, long b);
int main(){
    long smallestMultiple = 1;

    for(long i = 1; i <= 20; i++){
        smallestMultiple = lcm(smallestMultiple, i);
    }
    cout << smallestMultiple << endl;
    return 0;
}
long gcd(long a, long b){
    while(b != 0){
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long lcm(long a, long b){
    return ((a * b)/ gcd(a, b) );
}
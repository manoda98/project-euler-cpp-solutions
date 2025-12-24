#include<iostream>
#include<cmath>
using namespace std;

int sumSqure(int num);
int squreSum(int num);

int main(){
    cout << "Square of the sum : " << squreSum(100) - sumSqure(100) << endl;
    return 0;
}

int sumSqure(int num){
    int sum1 = 0;
    for(int i = 1; i <= num; i++){
        sum1 += pow(i,2);
    }
    return sum1;
}

int squreSum(int num){
    int sum2 = 0;
    for(int i = 1; i <= num; i++){
        sum2 += i;
    }
    return pow(sum2,2);
}
#include<iostream>
using namespace std;

int multiples(int num);
int main(){
    cout << "The sum of multiples: " << multiples(1000) << '\n';


    return 0;
}

int multiples(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
            //cout << sum << endl;
        }
    }
    return sum;
}
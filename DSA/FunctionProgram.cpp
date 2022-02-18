//print all prime number between two given numbers

#include<iostream>
#include<math.h>
using namespace std;

bool primeNumber(int num){
        for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

int main(){

    int a,b;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(primeNumber(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}
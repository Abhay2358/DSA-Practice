#include<iostream>

using namespace std;

int main(){
    int i, u, sum=0;
    cout<<"the perfect number between 1 to 500 are:"<<endl;

    for (i=1; i<=500; i++){
        for(u=1; u<=500; u++){

            if(u<i){
                if (i%u==0){
                    sum = sum+u;
               }
            }
            if (sum == i){
                cout<<i<<endl;
            }
        }
        u=1;
        sum=0;
    }
    return 0;
}
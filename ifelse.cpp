#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    if (n==0){
        cout<<"Zero";
    } else if (n==1){
        cout<<"One";
    }else if(n==2){  
        cout<<"two";
    }else if(n==3){  
        cout<<"three";
    }else if(n==4){  
        cout<<"four";
    }else if(n==5){  
        cout<<"five";
    }else if(n==6){  
        cout<<"six";
    }else if(n==7){  
        cout<<"Seven";
    }else if(n==8){  
        cout<<"eight";
    }else if(n==9){  
        cout<<"nine";
    }else if(n>9){
       if (n%2==0){
           cout<<"even number";
       }else{
           cout<<"odd number";
       }

    } 
    return 0;
}
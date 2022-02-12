#include <iostream>

using namespace std;

int main (){
    int n1, n2;
    cout<<"enter the number";
    cin>>n1>>n2;
    char op;
    cout<<"Enter the Operator";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;

    case '-':
        cout<<n1-n2<<endl;
        break;

    case '*':
        cout<<n1*n2<<endl;
        break;

    case '/':
        cout<<n1/n2<<endl;
        break;

    case '%':
        cout<<n1%n2<<endl;
        break;

    default: 
        cout<<'enter the differnt operator';
        break;

    }
    return 0;
}
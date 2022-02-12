#include <iostream>
using namespace std;

int main(){
    int number=0, sum = 0;
    do {
        sum += number;

        cout<<"Enter the mumber:";
        cin>>number;
    } while(number >= 0);
       
    cout<<"yor number is:\n"<<sum<<endl;
    return 0; 
}/*

// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}*/
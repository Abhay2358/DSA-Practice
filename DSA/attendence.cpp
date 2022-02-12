#include <iostream>
using namespace std;

int main(void){

    int class_attended, class_held;
    float attendence;
    cout<<"Enter the numbwr of class held\n";
    cin>>class_held;
    cout<<"Enter the total number of class attended\n";
    cin>>class_attended;

    attendence = ((55)/(1000) *100);

    cout<<attendence;

    if (attendence <= 75){
        cout<<"the student is not allowed to sit in the class\n";

    }else{
        cout<<"he is able to sit in the class\n";

    }
        cout<<endl;

    return 0;
}

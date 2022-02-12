#include <iostream>
using namespace std;
int main(void){
  int pocketmoney = 3000;
  for(int date = 1; date<=30; date++){
    if(date %2 == 0){
      continue;
    }
    if(pocketmoney == 0){
      break;
    }
    cout<<"you can go out!"<<endl;
    pocketmoney = pocketmoney-300;
  }
  return 0;
}


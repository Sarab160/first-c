#include<iostream>
using namespace std;
int sum(){
    int num;
    cin>>num;
    int num1;
    cin>>num1;
    int result = num + num1;
    cout<<result;
    return 0;
}
int function(int num3,int num4){
  int result1 = num3 + num4;
  return result1;
}
int main(){
    int callfunction = function(3,4);
    cout<<callfunction;

    // while(true){
    // sum();};
}
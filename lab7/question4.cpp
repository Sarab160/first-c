#include<iostream>
using namespace std;
// Create a C++ program with a function named calculateSum that calculates and returns the sum of the first 
// N natural numbers. In the main program, call this function and display the result for a user-inputted value 
// of N.


int calculateSum (){
    int number;
    cout<<"enter the number to sum "<<endl;
    cin>>number;
    int sum=0;
    for(int i=0;i<=number;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"sum of natural number is : "<<calculateSum()<<endl;
}
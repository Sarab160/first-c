
#include <iostream>
#include<time.h>
using namespace std;
// Write a C++ program that includes a function called generateRandomNumber which generates and returns a 
// random number between 1 and 100. In the main program, call this function and display the generated 
// number.
int random(){
    int number;
    srand(time(NULL));
    number = rand() %100;
    cout<<number;
}
int main(){
    random();
}
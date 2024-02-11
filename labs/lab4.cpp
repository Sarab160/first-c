#include<iostream>
#include<math.h>
using namespace std;
int q1(){
    //Write a C++ program to find the sum of all even numbers from 1 to 100 using a while loop. 
    int sum=0;
    int i = 1;
    while(i<=100){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"sum of first 100 even numer are "<<sum<<endl;
    return 0;
}
int q2(){
    //Create a C++ program that calculates the factorial of a given positive integer using a while loop
    int factorial = 1;
    int number;
    cout<<"enter the number to find factorial "<<endl;
    cin>>number;
    int i=1;
    while(i<=number){
        factorial*=i;
        i++;
    }
    cout<<"factorial of "<<number<<" is : "<<factorial<<endl;
    return 0;
}
int q3(){
    //. Implement a C++ program to reverse a given number using a while loop.
     int number,remainder,reverse=0;
    cout<<"enter the number"<<endl;
    cin>>number;
    while(number !=0){
        remainder = number%10;
     reverse = reverse*10 + remainder;
      number =number/10;
    }
    cout<<" REVERSE NUMBER IS "<<reverse<<endl;
    system("pause");
    return 0;
}
int q4(){
     // Write a C++ program to check if a given number is prime or not using a while loop
    int number,count = 0;
    cout<<"enter the number to check prime or not"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            count++;
        }}
        if(count==2){
            cout<<number<<" is prime number "<<endl;
        }
        else{
            cout<<number<<" is not prime number "<<endl;
        }
    
    return 0;
}
int q5(){
    //Develop a C++ program that computes the Fibonacci sequence up to a specified number of terms using a 
//while loop. 
}
int main(){
    Write a C++ program to find the sum of all even numbers from 1 to 100 using a while loop. 
   q1();
   Create a C++ program that calculates the factorial of a given positive integer using a while loop
  q2();
  . Implement a C++ program to reverse a given number using a while loop.
  q3();
  prime number
  q4();
}

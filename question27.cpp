#include<iostream>
#include<cmath>
using namespace std;
//check the palindrome number
int main(){
    int number,remainder,reverse=0;
    cout<<"ENTER NUMBER AT LEAST Five CHARACTER"<<endl;
    cin>>number;
   int palindrome = number;    while(number !=0){
        remainder = number%10;
     reverse = reverse*10 + remainder;
      number =number/10;
    }
    if(palindrome == reverse){
        cout<<palindrome<<" is a palindrome number because its reverse is "<<reverse<<endl;
    }
    else{
        cout<<palindrome<<" is not a palindrome number because its reverse is "<<reverse<<endl;
    }
    system("pause");
    return 0;
}
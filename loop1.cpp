#include<iostream>
using namespace std;
int sumOfeven(){
   int number =2 ;
   int sum=0;
   while(number<=100){
    sum+=number;
  number= number +2;

   }
   cout<<"the sum of first hundred even number is "<<sum<<endl;
   return 0;
}
int factorial(){
   int num, factorial = 1;
   
   cout<<"enter number "<<endl;
   cin>>num;
   if(num<0){
      cout<<"enter the poistive number"<<endl;
   }
   else{
      int i;
      while(i <= num){
         factorial *= i;
         i++;
      }
      cout<<"the factorial of number is "<<factorial<<endl;
   }
   return 0;
}
int question3(){
   int number,remainder,reverse=0;
    cout<<"ENTER NUMBER "<<endl;
    cin>>number;
  
    while(number !=0){
        remainder = number%10;
     reverse = reverse*10 + remainder;
      number =number/10;
    }
    cout<<" REVERSE NUMBER IS "<<reverse<<endl;
    return 0;
}
int question4(){
   int number;
   cout<<"enter number"<<endl;
   cin>>number;
   int i=1;
   while(i<=1){
      i++;
      if(number%number==0&&number%2!=0&&number%3!=0){
         cout<<number<<" is a prime number"<<endl;
      }
      else{
         cout<<number<<" is not a prime number"<<endl;
      }
   }
   system("pause");
   return 0;
}
int question5(){

 {
  int num1,num2;
  cin>>num1;
  cin>>num2;
  int result = num1+num2;
  cout<<result;
  {
   int num3,num4;
   cout<<"enter number for multiplication"<<endl;
   cin>>num3;
   cin>>num4;
   int result2 = num3*num4;
cout<<result2;
  }
  int num5,num6;
  cout<<"enter numbers for subtraction"<<endl;
  cin>>num5;
  cin>>num6;
  int result3 = num5-num6;
  cout<<result3;

   
}

}
int main(){
    //sumOfeven();//the sum of first 100 even number
   // factorial();
   //question3;
   question4();
   //question5();
   return 0;
   
}

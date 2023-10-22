#include<iostream>
#include<math.h>
using namespace std;
//reverse th number
int main(){
    int number,remainder,reverse=0;
    cout<<"ENTER NUMBER AT LEAST FOUR CHARACTER"<<endl;
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
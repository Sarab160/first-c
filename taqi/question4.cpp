#include<iostream>
using namespace std;
int main(){
   float miles;
   cout<<"Enter the number of miles travelled by car"<<endl;
   cin>>miles;
    float fuel;
    cout<<"Enter the fuel consumed by car"<<endl;
    cin>>fuel;
    double oneliter = miles / fuel;
   cout<<"Car travelled in 1 liter fuel is : "<<oneliter;
   system("pause");
   return 0;
}
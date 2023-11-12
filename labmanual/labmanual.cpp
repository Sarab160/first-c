#include<iostream>
using namespace std; 
int main(){
    int sum =0;
    int number=0;
    int i = 1;
    do{
        cout<<"enter number"<<endl;
        cin>>number;
        sum +=number;
        i++;
    }while(i<=10);
    float average = sum/10;
    cout<<"average of students is : "<<average<<endl;
}
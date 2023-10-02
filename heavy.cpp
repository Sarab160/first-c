#include<iostream>
using namespace std;
int main(){
    cout<<"MAKE A PROGEAM TO CHECK YOUR AGE AREA \n";
    int age;
    cout<<"ENTER yOUR AGE\n";
    cin>>age;
    if(age>0 && age<6) {cout<<"your are child";}
    else if (age>6 && age<13)
    {
        cout<<"teenager";
    }
    else if(age>13 && age<18){
        cout<<"boy";
    }
    else if(age>18 && age<25){
        cout<<"adult";
    }
    else{
        cout<<"older than boys";
    }
    
}
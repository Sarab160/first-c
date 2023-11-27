#include<iostream>
using namespace std;
int q1(){
   // Write a C++ program to calculate the area of a rectangle given its length and width. 
int length,width,areaofrectangle;
cout<<"enter the length of rectangel"<<endl;
cin>>length;
cout<<"enter the width of rectangle"<<endl;
cin>>width;
areaofrectangle = length * width;
cout<<"area of rectangle is : "<<areaofrectangle;
return 0;
}
int q2(){
    //Create a program that converts temperature from Fahrenheit to Celsius and vice versa. 
    float celius,fahenheit;
    cout<<"enter the temperatuere in celcius"<<endl;
    cin>>celius;
    cout<<"enter the the farhenheit"<<endl;
    cin>>fahenheit;
    float ctoftemperature = celius*9/5 + 32;
    cout<<"from celcius to fehranheit : "<<ctoftemperature<<endl;
    float ftoctemperature  = 32*fahenheit-32 *9/5;
    cout<<"temperature from fehranheit to celcius : "<<ftoctemperature<<endl;
    return 0;
}
int q3(){
    //Write a program that calculates the average of three numbers entered by the user. 
    float num,num1,num2;
    cout<<"enter the three numbers"<<endl;
    cin>>num>>num1>>num2;
    float average = num+num1+num2/3;
    cout<<"average of numbers are "<<average<<endl;
}
int q4(){
    //Develop a program that swaps the values of two integer variables without using a third variable. 
    int a=10;
    int b=12;
    cout<<"before swapining a= "<<a<<" b= "<<b<<endl;
    a=b;
    b=a-2;
    cout<<"after swapining a= "<<a<<" b "<<b<<endl;
}
int q5(){
    //Write a C++ program to compute the volume of a sphere using the radius provided by the user.
       cout<<"FIND AREA OF SPHERE\n";
    float radius;
    cout<<"enter the radius\n";
    cin>>radius;
    float pi = 3.14159;
    cout<<"VOLUME OF SPHERE";
    float cubeofradius = radius*radius*radius;
    float volumeofsphere = pi * cubeofradius * 4/3;
    cout<<"VOLUME OF SPHERE = "<<volumeofsphere;

    system("pause");
    return 0;
}
int q6(){
    //Create a program that converts a given number of days into years, months, and days. 
float days;
cout<<"enter the days:"<<endl;
cin>>days;
float yearsintodays = days/365;
cout<<"days into years : "<<yearsintodays<<endl;
float daysintomonths = days/30;
cout<<"days in to months are : "<<daysintomonths<<endl;

}
int q7(){
    //Write a program that takes a user's age as input and then prints the age in months and days
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    float indays = age*365;
    cout<<"age in days are : "<<indays<<endl;
    float in  = age*365;
    float inmonths = in/30;
    cout<<"age in months are : "<<inmonths<<endl;
}
int q8(){
//Create a program that converts a given number of minutes into hours and minutes. 
int minutes,hours;
    cout<<"Enter minutes "<<endl;
    cin>>minutes;
    cout<<"ENTER hours"<<endl;
    cin>>hours;
    cout<<"convert mintes into seconds"<<endl;
    int minIntoseconds = minutes * 60;
    cout<<minIntoseconds <<" sec"<<endl;
    cout<<"convert hours into seconds "<<endl;
    int hoursIntoseconds = hours * 360;
    cout<<hoursIntoseconds<<" sec"<<endl;
    system("pause");
    return 0 ;
}
int main(){
//     Write a C++ program to calculate the area of a rectangle given its length and width. 
//    q1();
//     Create a program that converts temperature from Fahrenheit to Celsius and vice versa. 
//    q2();
//    Write a program that calculates the average of three numbers entered by the user. 
//    q3();
//    Develop a program that swaps the values of two integer variables without using a third variable. 
//    q4();
//    Write a C++ program to compute the volume of a sphere using the radius provided by the user.
//   q5();
//   Create a program that converts a given number of days into years, months, and days. 
// q6();
// Write a program that takes a user's age as input and then prints the age in months and days
// q7();
//Create a program that converts a given number of minutes into hours and minutes. 
//q8();

    }
#include<iostream>
#include<math.h>
using namespace std;
//arae of rectangle
int areaofrectangle(){
    cout<<"enter the length of rectangle"<<endl;
    float length;
    cin>>length;
    cout<<"enter the width of rectangle"<<endl;
    float width;
    cin>>width;
    cout<<"formula of rectanbgle"<<endl;
    float area = length * width;
    cout<<"area of rectangle is "<< area ;
}
//convert temperature to farnheit to celcius and viceverse
int temprature(){
cout<<"convert the temperature"<<endl;
float celcius,farnheit;
cout<<"ENTER TEMPERATURE IN FARNHEIT"<<endl;
cin>>farnheit;
cout<<"convert temperature farheit into celcus"<<endl;
float tempratureincelcius = ( farnheit-32) * 5/9;
cout<<"conversion in celcius = "<<tempratureincelcius<<endl;

cout<<"ENTER TEMPERATURE IN CELCIUS"<<endl;
cin>>celcius;
cout<<"conversion into farheit"<<endl;
float temperatureintofarnheit = (celcius * 9/5) + 32;
cout<<temperatureintofarnheit;
}

//find average
int average(){
    float num,num1,num2;
    cout<<"enter num"<<endl;
    cin>>num;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num3"<<endl;
    cin>>num2;
cout<<"average by formula"<<endl;
float average = (num+num1+num2)/3;
cout<<"average is  = "<<average;
}
//days conversion into years and vicevesre
int daysconversion(){
    float days,months,years;
    cout<<"enter days"<<endl;
    cin>>days;
    cout<<"convert days into yers"<<endl;
float daysintoyears = days/365;
cout<<daysintoyears<<endl;
cout<<"convert days into months"<<endl;
float daysintomonths = days/30.147;
cout<<daysintomonths<<endl;
system("pause");

}
//check even odd
int evenodd(){
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    if(number%2==0){
        cout<<"it is even number"<<endl;
    }
    else{ 
    cout<<"it is odd number"<<endl;
    }
system("pause");
}

int main(){
    //area of rectangle
//areaofrectangle();
//temperature conversion function
//temprature();
// average is there
//average();
//days conversion
//daysconversion();
//check the even odd number
evenodd();

}
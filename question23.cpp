#include<iostream>
#include<cmath>
using namespace std;
//bill processing system
int main(){
    int accountNUMBER,numberOfpremium_channels,basicservice_fee,service_connection;
    float billAmount,totalservice_fee;
    char code;
    cout<<"enter your acount number"<<endl;
    cin>>accountNUMBER;
    cout<<"enter your code"<<endl;
    cin>>code;
    if(code=='R'||code=='r'){
        cout<<"Enter your premium channels number"<<endl;
        cin>>numberOfpremium_channels;
        float perpremiumchannels_fee=7.50;
        float billprocessing= 4.50;
        float basicServicefee=20.50;
        float   totalbill = perpremiumchannels_fee+billprocessing+basicservice_fee*(numberOfpremium_channels);
       cout<<"Your account number : "<<accountNUMBER<<endl;
       cout<<"Total bill = "<<totalbill<<endl;
    }
    else if(code=='B'||code=='b'){
        cout<<"enter your basic service connection"<<endl;
        cin>>service_connection;
         cout<<"Enter your premium channels number"<<endl;
        cin>>numberOfpremium_channels;
        float billprocessing_fee= 15.00;
        float basicservice_fee = 75.00;
        float permimuchanneks= 50.00;
        float totalbill= billprocessing_fee+basicservice_fee+permimuchanneks*(service_connection);
        cout<<"your account number : "<<accountNUMBER<<endl;
        cout<<"total bill : "<<totalbill<<endl;
    }
    else if(service_connection>10){
        cout<<"enter number of your service connection"<<endl;
        cin>>service_connection;
        cout<<"number of premium channels"<<endl;
        cin>>numberOfpremium_channels;
         float billprocessing_fee= 15.00;
        float basicservice_fee = 75.00;
        float permimuchanneks= 50.00;
        float totalbill= billprocessing_fee+basicservice_fee+permimuchanneks*(service_connection);
        cout<<"your account number : "<<accountNUMBER<<endl;
        cout<<"total bill : "<<totalbill<<endl;
    }
    else{
        cout<<"enter your valid code"<<endl;
    }
    system("pause");
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
//months tell days
int main(){
    int month;
    cout<<"Enter the month number "<<endl;
    //by month number code give number of days according to month
    cin>>month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout<<"There are 31 days in this month"<<endl;
    }
    else if(month==4||month==6||month==9||month==11){
        cout<<"There are 30 days in this month"<<endl;
    }
    else if(month==2){
        cout<<"There are 28 days in this month (in leap year there are 29 days)"<<endl;
    }
    else{
        cout<<"invalid month number entered"<<endl;
    }
}
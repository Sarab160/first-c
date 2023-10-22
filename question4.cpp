#include<iostream>
#include<math.h>
using namespace std;
//program to convert into seconds
int main(){
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
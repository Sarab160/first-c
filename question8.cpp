#include<iostream>
#include<math.h>
using namespace std;
//convert kilometer into hours
int main(){
    float killometer;
    cout<<"ENTER VALUE IN KILLOMETER PER HOURS"<<endl;
    cin>>killometer;
    cout<<"in meters second"<<endl;
    float inmetersperscond = killometer / 3.6;
    cout<<inmetersperscond<<endl;
    system("pause");
    return 0;
}

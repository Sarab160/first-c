#include<iostream>
#include<math.h>
using namespace std;
//table of integer
int main(){
    int number;
    cout<<"ENTER NUMBER"<<endl;
    cin>>number;
    int i = 10;
    for(i=0;i<=10 ;i++){
    int table = number * i;
    cout<<number <<" * "<< i<<" = "<< table<<endl;
    }
    system("pause");
    return 0;
}
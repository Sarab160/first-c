#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
    int pattern;
    int value=1;
    cout<<"ENTER THE PATTREN NUMBER "<<endl;
    cin>>pattern;
    cout<<left;
   for(int i=1;i<=pattern;i++){
    for(int j=1;j<=5;j++){
        value =j;
        for(int k=1;k<i;++k){
            value*=j;
        }
        cout<<setw(5)<<value;
    }
    cout<<endl;
   }
   system("pause");
    return 0;
}
#include<iostream>
using namespace std;
int main(){
        cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
    cout<<"ENTER THE 10 INTEGERS "<<endl;
    int arr_10[10];
    for(int i=0;i<10;i++){
        cin>>arr_10[i];
    }
    cout<<endl;
    cout<<"ARRAY before MODIFICATION :"<<endl;
    cout<<"{ ";
    for(int i=0;i<10;i++){
        cout<<arr_10[i]<<",";
    }
    cout<<" }";
    cout<<endl;

    //swap the integers
    int swap = arr_10[0];
    arr_10[0]=arr_10[9];
    arr_10[9]=swap;

     cout<<"ARRAY after MODIFICATION :"<<endl;
     cout<<"{ ";
    for(int i=0;i<10;i++){
        cout<<arr_10[i]<<",";
    }
    cout<<" }";
    cout<<endl;
    system("pause");
    return 0;
}
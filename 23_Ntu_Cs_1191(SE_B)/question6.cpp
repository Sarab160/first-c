#include<iostream>
using namespace std;
int main(){
     cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
     cout<<"ENTER THE ARRAY OF 10 INTEGERS :"<<endl;
     int full_arr[10];
     for(int i=0;i<10;i++){
        cin>>full_arr[i];
     }
     cout<<"ARRAY BEFORE MODIFICATION "<<endl;
     cout<<"{";
     for(int i=0;i<10;i++){
        cout<<full_arr[i]<<",";
     }
     cout<<"}";
     cout<<endl;
     int last_Element = full_arr[9];
     for(int i=9;i>0;i--){
        full_arr[i] = full_arr[i-1];
     }
     full_arr[0]=last_Element;
    
     cout<<"ARRAY AFTER MODIFICATION :"<<endl;
      cout<<"{";
     for(int i=0;i<10;i++){
        cout<<full_arr[i]<<",";
     }
     cout<<"}";cout<<endl;
     system("pause");
     return 0;

}
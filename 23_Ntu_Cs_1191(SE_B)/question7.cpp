#include<iostream>
using namespace std;
/*Take 10 integer inputs from the user in an array and display the array. Now reverse 
the elements of the whole array. Hint: use a 2nd array.*/
int main(){
     cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
cout<<"ENTER THE ARRAY OF 10 INTEGERS :"<<endl;
int arr[10];

     for(int i=0;i<10;i++){
        cin>>arr[i];
     }
     cout<<"ARRAY ORIGINAL "<<endl;
     cout<<"{";
     for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
     }
     cout<<"}";
     cout<<endl;
     //in reverse order
     cout<<"ARRAY REVERSE "<<endl;
     cout<<"{";
     for(int i=9;i>=0;i--){
        cout<<arr[i]<<",";
     }
     cout<<"}";
     cout<<endl;
     system("pause");
     return 0;
}
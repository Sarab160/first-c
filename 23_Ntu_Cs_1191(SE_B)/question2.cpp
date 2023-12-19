#include<iostream>
using namespace std;
/*Take 10 integer inputs from the user into an integer array and find the sum, product, 
and average of these inputs. In the end display the array along with the results.*/
int main(){
    cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
 int size;
 cout<<"ENTER THE SIZE OF ARRAY "<<endl;
 cin>>size;
 int arr[size];
 int sum=0;
 int product=1;
 for(int i=0;i<size;i++){
    cout<<"ENTER THE INTEGER : ";
    cin>>arr[i];
    sum+=arr[i];
    product *=arr[i];
 }
 double average_arr = sum/size;
 cout<<"ARRAY IS : ";
 cout<<"{";
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
 cout<<"}";

 cout<<endl;
 cout<<"PRODUCT OF ARRAYB IS : "<<product<<endl;
 cout<<"SUM OF ARRAY IS : "<<sum<<endl;
 cout<<"AVERAGE OF ARRAY IS : "<<average_arr<<endl;
 system("pause");
 return 0;
}
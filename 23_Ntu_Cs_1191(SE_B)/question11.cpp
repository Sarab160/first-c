#include<iostream>
#include<iomanip>
using namespace std;
int main(){
        cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
   int m,n;
   cout<<"ENTER THE NUMBER OF ROWS"<<endl;
   cin>>m;
   cout<<"ENTER THE NUMBER OF COLOUMNS"<<endl;
   cin>>n;
   int arr[m][n];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"ENTER THE INTEGERS : "<<" ";
        cin>>arr[i][j];
    }
   }
   cout<<"2 D ARRAY IS"<<endl;
     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" ";
        cout<<arr[i][j];
    }
    cout<<endl;
   }
   int sumof_c1 = arr[0][0]+arr[1][0]+arr[2][0];
    int sumof_c2 = arr[0][1]+arr[1][1]+arr[2][1];
     int sumof_c3 = arr[0][2]+arr[1][2]+arr[2][2];
     int sumof_r1 = arr[0][0]+arr[0][1]+arr[0][2];
       int sumof_r2 = arr[1][0]+arr[1][1]+arr[1][2];
       int sumdiagonal_1=arr[0][0]+arr[1][1]+arr[2][2];
        int sumdiagonal_2=arr[0][2]+arr[1][1]+arr[2][0];
         cout<<"C1= "<<sumof_c1<<" C2= "<<sumof_c2<<" C3= "<<sumof_c3<<" R1= "<<sumof_r1<<" R2= "<<sumof_r2<<" D1= "<<sumdiagonal_1<<" D2= "<<sumdiagonal_2<<endl;
         system("pause");
         return 0;

}
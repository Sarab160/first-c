#include<iostream>
using namespace std;
int main(){
    cout<<"MUAHAMMAD SARAB RAFIQUE"<<endl;
    cout<<"23_NTU_CS_1191"<<endl;
    int size;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size;
    int integer_arr[size];
    for(int i=0;i<size;i++){

        cout<<"ENTER THE INTEGERS : ";
        cin>>integer_arr[i];
    }
    int smallest_number = integer_arr[0];
    int largest_Number = integer_arr[0];
    int smallest_Index = 0;
    int largest_index = 0;
    

    for(int i=0;i<size;i++){
        if(integer_arr[i]>largest_Number){
            largest_Number=integer_arr[i];
            largest_index=i;
            
        }
        if(integer_arr[i]<smallest_number){
            smallest_number=integer_arr[i];
            smallest_Index=i;
              }
    }
    
    cout<<"SMALLEST IS "<<smallest_number<<" AT "<<smallest_Index<<endl;
    cout<<"LARGEST IS "<<largest_Number<<" AT "<<largest_index<<endl;
    system("pause");
    return 0;
}
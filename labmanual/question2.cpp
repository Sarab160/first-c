#include<iostream>
using namespace std; 
int main(){
    char gender = '/0';
   int male;
   int female;
   int i=0;
   do{
    cout<<"ENTER GENDER OF 10 STUDENTS"<<endl;
    cin>>gender;
    while(gender!='M'&&gender!='m'&&gender!='F'&&gender!='f'){
        if(gender =='M'||gender=='m'){
            male++;
        }
        else{
            female;
        }
        i++;
    }
   }while(i<10);
   cout<<"MALE STUDENTS ARE: "<<male;
   cout<<"FEMALE STUDENTS ARE: "<<female;
   system("pause");
   return 0;
   
}
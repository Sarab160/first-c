#include<iostream>
using namespace std;
int q1()
{
int num;
cout<<"enter the number"<<endl;
cin>>num;
int *pointer1 = &num;
cout<<"address of number is: "<<&num<<endl;
cout<<*pointer1;
system("pause");
return 0;
}
int q2(){
    int array[3]= {1,2,3};
    int *address= array;
    cout<<" array notatin is "<<endl;
    for(int i=1;i<=3;i++){
        cout<<*(address+i)<<endl;
    }
}
int hello(string name){
    string name2 = name;
    cout<<name;

}
int main(){
//question is 
//q1();
//question 2 is
//q2();
if(hello("sarab")=="sarab"){
    cout<<"hey men whta happen"
}
}
